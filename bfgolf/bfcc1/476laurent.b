
General algorithm: 
shift right all numbers into 'center' position; while the central part 
contains at least two numbers take the two edges of the central part and 
store them into the 'left' and 'right' part respectively; then if there is 
still a number in the central part move it to the left part; finally shift 
the right part into final position close to the left part (the left part is 
already in final position)

details: 
* in the main loop: numbers are written as eight binary digits before moving
  them over the remaining central part (to minimize the number of travels 
  over the lengthy central part);
* to further minimize the number of travels: bits are copied over two by two
  at each travel (two bits moved in one direction and two bits moved on
  the return journey) 
* movement over the central part is done two cells at a time ending at the 
  first two consecutive null cells (for speed);
* it turns out that binary digits use two conventions (1/2 or 0/1) and thus
  two conversion algorithms: the 1/2 convention is easier to work with but 
  it requires to setup eight 1 in the prologue (which is why the right number
  is encoded in the 0/1 convention to save approximately 16 bytes of code)
* is it is easiest to build the numbers back from their binary representation 
  when starting with the most significant bit; therefore the number being 
  moved to the right is reconstructed on the fly whereas the eight bits of 
  the other number are stored until the number can be reconstructed;
* some care was taken to avoid copying the numbers needlessly: they are at
  final place once reconstructed;
* a string of 1 is used as a rail to guide movement during the epilogue; this
  rail is obtained as a byproduct of the main loop (only half the rail is
  present if there is only one number but the epilogue handles it fine);
* moving numbers in the epilogue is done by decrementing them by two units
  at a time for speed;

notations:
  abcdef = the numbers to reverse
  n = loop counter (equals 9 after the inner loop; used to count the
    number of bits to take into account when reconstructing the left number)
  t = right number being reconstructed
  r = number to add to t (t := t*4 plus r minus 1)
  lxh = binary representation in 1/2 convention (l=lowest significant bit)
  lyh = binary representation in 0/1 convention

The current data cell is on top of ^ or at the immediate right of :
________________________________

  0abcdef0
  ^

>
  0abcdef0    | 00
   ^             ^
[

  [>]< [[->>>>>>>>>>>+<<<<<<<<<<<]<]
  000000000000abcdef
  ^
  >>>+>+>+>+>+>+>+>>>[>]<<
  000111111100abcdef0
                  ^ 
  [ 
    >>>
  0f00111111100bcde01111111100a | 000111111100abcdef00
                    ^                                ^
    [>]<[-<]<
  0f00111111100bcde00000000000a
                  ^
    [>>>>[>]+<[-<]<<<-]+
  0f00111111100bcd1000lyyyyyyha
                  ^
    [<<]<[>]+>>
  0f00111111110bcd1000lyyyyyyha
               ^
    [<<-[<-]++[>]>-]
  0f00hxxxxxxl00cd1000lyyyyyyha
               ^
    <+
  0f00hxxxxxxl10cd1000lyyyyyyha
              ^
    [
      [>]<++[<]>
  0fly00xxxxxln0cd11100tyyyyyha
        ^
        
      -                       :1x | :0x
      [->-                      0:0 | 0:1
        [-> [[>>]<] <+++> ]     00==4:00t  |  0:0==100t
        >[  [[>>]<] <++>> ]     00==r0:0t
        <                       00==r:00t
      ]>                      00==r0:0t | 0:x
      [-                        0:0 | 0:1
        [-> [[>>]<] <+>   ]     00==2:00t  |  0:0==100t
        >[  [[>>]<] >     ]     00==r0:0t
      ]                       r0:0tyy

      >>>[-<<<+>>>]           r0yty:0
      <<[->>++++<<]           r0y:0yt
      <<<-[->>>>>+<<<<<]      :00y0yt
    
      +>+>>+<                 11:11y | 11:01y
      [>>                       1111:1 | 1111:0
        [-<-< [[<<]>] <<+<+>>> 110:0 ]
        <                       11:00  | 111:10
        [-<   [[<<]>] <<+> 01:00 ]
                                1y:00
      ]                       1y:00  | 11:01y
      >                       1y0:0  | 110:1y
      [>                        1101:1 | 1101:0
        [-<-<+[[<<]>] <<<+>>> 100:0 ]
        <                       110:10 | 01:00
        [-<+  [[<<]>] < 00:00 ]
        >                       0y0:0
      ]                       yy0:0
      >>
      
  0flyyy00xxxln0cd1111100tyyyha
           ^
    ]
                              
  0flyyyyyyh0090cd11111111100ba  
               ^
    <-[-[-<+>]+<<[-<++>]>]
  0fe00111111110cd11111111100ba  
      ^
    >[>]<->>[[>>]<]
  0fe00111111100cd11111111100ba  
                           ^
    +<<<<<<<<<-<<
  0fe00111111100cd01111111110ba  
                ^
  ]
  
  0fe00111111100c01111111110ba | 0fe0011111110001111111110ba | 000111111100a
               ^                             ^                            ^
  > 
  0fe00111111100c01111111110ba | 0fe0011111110001111111110ba | 000111111100a
                ^                             ^                            ^
  [ <<+[[<<]>[-]<<+[>>>]<-] ]
  0fec0011111111000111111110ba | 0a00111111100
                 ^                           ^
  <+>+>+[>]>
  0fec0011111111111111111110ba | 0a00111111111100
                            ^                   ^
  [ 
    [ - 
  0fec0011111111111111111110ba
                            ^
      [[<<<]<+>>>>-]
  0fec1011011111111111111110ba | 0fec00111111111111111111100a
          ^                                                ^
      +[<<<]>[-]<<+
  0fec2001111111111111111110ba
      ^                                                   
      [>>>]>-    
    ]
    
  0fecb0011111111111111111100a
                            ^
    <+>>                             
  ]
  
  0fecba0011111111111111111100
                             ^
  <<[-<]<
]
  0fecba0     |  00
        ^         ^
<[<]
  
  0fecba0     |  00
  ^              ^


