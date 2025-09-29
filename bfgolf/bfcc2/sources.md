# [Logical BF Competition Result(s)](https://sourceforge.net/p/brainfuck/discussion/201037/thread/1622deb7/)

Laurent Vogel at [2005-04-19 05:31 +0000](https://sourceforge.net/p/brainfuck/discussion/201037/thread/1622deb7/#1490):

> Here is my raw 594-byte entry  
> >,[[>>[>]+<[-<]<-]>>>>>>[>>[-<[<<<<[<+<+[>]+[>[-<++>]<<]<[-]<[->>>-<<<]>>>[-<<<+>>>]]>[[>]<[-<]+<]]<[[-<]>++<<]]<[-<++[<[-<++>]>[-<+>]<-]<<<<[-<[->++<]>[->>+++++<<]>>>[-<+>]<<<<]>+>>[-<<<+>>>]<]>]>[-<<[-<-<<<<<->>>]<[-<++<<]>]<<[[-<<]<<[-]<[->+>+<<]>[-<+>]>[[[->>+<[->]>[<+++++++++>>>]<<<<]>[<++++++++++>[-<->]>-<]+>]<[<<]]<[>]>>[-]+[>>]<<[+++++++[-<++++++>]<.[-]<]++++++++++.[-]>]>>>[[-<<<+>>>]<<<<[-]+>[-<<[>>>>>>[>>]+<<[-<<]<<<<-]>]>>[->+<]++++++++[->>+>>[-<+>]<<<[-[->->[-[->+<]]++<<]>[->[->+<[->-<]]+<]<]>[->[>+<[-]]<]<<[->>+<<]>+>>>[-<<<<+>>>>]<<]>[-]<<[->[-<<++>>]<<<]>[-<<<+>>>]>>]<<<,]  
> Laurent

Laurent Vogel at [2005-04-19 05:33 +0000](https://sourceforge.net/p/brainfuck/discussion/201037/thread/1622deb7/#1490/22f3):

> And here it is with comments (best viewed with a proportional font, sorry for that).  
> In short: get an input byte; write it in binary; determine what  
> input byte it was by jumping at meaningful bit positions; Then  
> according to the input byte do different actions  
>   NOT:  compute 255 minus number  
>   LINEFEED: print the number in decimal  
>   COMMA: just push a number on the stack  
>   DIGIT: multiply previous number by ten and add digit to it  
>   OR; AND; XOR: store the number of binary operation to do later  
> If there is an operation number at the end: then perform the  
> binary operation: expand both numbers in binary with digits interweaved;  
> then make a pass over them two bits at a time; finally reconstruct the  
> result  
> >,[  
>   structure is:  nux  
>                    ^  
>   where n = number on top of stack;   
>         u = 0 if not inside a number; 1 if in a number  
>         x = next input byte  
>   nux000000000  
>     ^  
>   write the input byte in binary   
>   [>>[>]+<[-<]<-]  
>     
>   nu00lxxxxxxh  
>     ^  
>   >>  
>      
>   01010000 (nl) | 01100100 (&) | 00110100 (co) | xxxx1100  
>   ^               ^              ^               ^  
>   01111010 (^)  | 00111110 (|) | 01111110 (~)  
>   ^               ^              ^              
>     
>   >>>>   
>   01010000 (nl) | 01100100 (&) | 00110100 (co) |   
>       ^               ^              ^                 
>   xxxx1100  | 01111010 (^)  | 00111110 (|) | 01111110 (~)  
>       ^           ^               ^              ^              
>   [   
>     >>  
>   xxxx1100  | 01111010 (^)  | 00111110 (|) | 01111110 (~)  
>         ^           ^               ^              ^              
>     [   
>   01111010 (^)  | 00111110 (|) | 01111110 (~)  
>         ^               ^              ^              
>       -<  
>   01111000 (^)  | 00111100 (|) | 01111100 (~)  
>        ^               ^              ^              
>       [<<<<  
>   00111100 (|) | 01111100 (~)  
>    ^              ^              
>         [  this is the NOT case   
>           
>           nu00 01111100 (~)  
>                 ^     
>                  
>           compute 255  
>           <+<+[>]+[>[-<++>]<<]  
>             
>           nu0z 00000000   (z=255)  
>             ^     
>           <[-]<[->>>-<<<]>>>[-<<<+>>>]  
>           mu00 00000000  
>              ^  
>         ]>  
>   nu00 00111100 (|) | mu00 000000  
>          ^                 ^     
>         [  OR case  
>           strip the ones  
>           [>]<[-<]  
>           abu00 00000000   
>                  ^                  
>           +<  
>         ]   
>    abu00 010      | mu00 000  
>          ^               ^   
>       ]<  
>    abu00 01111000 (^)  | abu00 010 | mu00 000  
>              ^               ^          ^  
>       [ XOR case; strip the ones  
>         [-<]>++<<  
>       ]  
>         
>    abu00 020  | abu00 010 | mu00 000  
>        ^            ^          ^  
>    ]<  
>    nu00 xxxx1100  | abu00 020  | abu00 010 | mu00 000  
>              ^         ^            ^          ^  
>    [ digit  
>      
>      -<++[<[-<++>]>[-<+>]<-]  
>                 
>      nu00 d0    (d = digit)  
>            ^  
>      <<<<  
>      nu00 d0  
>       ^  
>      [ if u==1 then we accumulate to the next number  
>        -<  
>        [->++<]>[->>+++++<<]  
>          
>        000N d  
>         ^  
>        >>>[-<+>]<<<<  
>        000m 0  
>        ^  
>      ]  
>      n000 d  | 000 m  
>       ^        ^  
>        
>      >+>>[-<<<+>>>]  
>      m100  
>         ^  
>      <  
>    ]  
>      
>    mu00 000  | abu00 020  | abu00 010 | mu00 000  
>      ^            ^            ^          ^  
>    >  
>    mu00 000  | abu00 0o0    
>       ^            ^        
>      
>   ]>  
>   01010000 (nl) | 01100100 (&) | 00110100 (co) | mu00 000  | abu00 0o0  
>        ^               ^              ^               ^            ^  
>     
>   [   
>     abu00 01100100 (&) | nu00 00110100 (co)   
>                ^                   ^          
>     -<<   
>     abu00 01100000 (&) | nu00 00110000 (co)   
>              ^                   ^          
>        
>     [ comma  
>       remove ones  
>         
>       -<-<  
>       n100 00000000   
>             ^  
>         
>       clear u field  
>       <<<<->>>  
>               
>       nu00 000    
>            ^        
>     ]<  
>     abu00 01100000 (&) | mu00 000   
>             ^               ^          
>     [ AND  
>       -<++<<  
>     ]  
>     abu00 030 | mu00 000   
>         ^          ^       
>     >  
>   ]  
>     
>   01010000 (nl) | mu00 000  | abu00 0o0  
>        ^               ^            ^  
>   <<  
>   01010000 (nl) | mu00 000  | abu00 0o0  
>      ^              ^            ^  
>   [ LINEFEED: print the number  
>     
>     nu00 01010000  
>             ^  
>     [-<<]<<[-]<  
>       
>     n  
>     ^  
>     copy n  
>       
>     [->+>+<<]  
>     0nn  
>     ^  
>     >[-<+>]>  
>     n0n0  
>       ^  
>     [ if n is not zero  
>       [ for the quotient  
>         [ number  n a q 0 0  
>           ->>+<[->]>[<+++++++++>>>]<<<<  
>         ] 0 r q 0 0  
>         >  
>         [<+++++ +++++>[-<->]>-<]  
>         +>  
>       ]  
>       <[<<]  
>     ]  
>     <[>]  
>     >>[-]+[>>]<<  
>     [+++++++[-<++++++>]<.[-]<]  
>     +++++ +++++.[-]  
>       
>     n0  
>      ^  
>     >  
>     nu00  
>       ^  
>   ]  
>     
>   mu00 000  | abu00 0o0  
>     ^            ^  
>   >>>  
>   mu00 000  | abu00 0o0  
>         ^            ^  
>   [ binary operation!  
>     
>     abu00 0o0  
>            ^      
>     
>     [-<<<+>>>]<<<<[-]+>  
>       
>     ab1o0  
>        ^  
>          
>          
>     [-<<[>>>>>>[>>]+<<[-<<]<<<<-]>]   
>       
>       
>      
>       bxx000  | a0xx000x  
>       ^         ^      
>          
>        
>       
>     000o00ababab  
>      ^  
>     >>[->+<]++++++++  
>     0008o0ababab  
>        ^  
>     [-  
>       io0ab  
>       ^  
>       >>+>>[-<+>]<<<  
>       io1s0  
>        ^  
>         
>       i01s0 (or) | i11s0 (xor) | i21s0 (and)  
>        ^            ^             ^         
>       [-    
>         i01s0 (xor) | i11s0 (and)  
>          ^             ^    
>         [->->  
>           
>           i00s0 (and)  
>              ^  
>           [-[->+<]]  
>           i000r  
>              ^  
>           ++<<  
>           i002r   
>            ^  
>             
>         ]>  
>         i01s0 (xor) | i00or  
>           ^             ^  
>         [  
>           i01s0 (xor)  
>             ^  
>           ->[->+<[->-<]]+<  
>           i00or  
>             ^  
>         ]<  
>         i00or  
>          ^  
>       ]>  
>         
>       i01s0 (or) | i00or  
>         ^            ^  
>       [->   
>         i00s0   
>            ^    
>         [>+<[-]]<  
>         i00or  
>           ^  
>       ]  
>       <<[->>+<<]>+>>>[-<<<<+>>>>]<<  
>       r1io0  
>         ^  
>     ]  
>     0000r1r1r1r1r1r1r1r10o  
>                         ^  
>     >[-]<<[->[-<<++>>]<<<]  
>       
>     000n  
>       ^  
>     >[-<<<+>>>]  
>     n000  
>        ^  
>     >>         
>     mu00 000  
>           ^  
>   ]  
>   <<<,  
> ]  
> Laurent

Laurent Vogel at [2005-04-19 05:44 +0000](https://sourceforge.net/p/brainfuck/discussion/201037/thread/1622deb7/#1490/3ba4):

> And here is the commented version with the initial space (blast the silly forum) :  
>   http://lvogel.free.fr/bf/logical.bf  
> Laurent

Keymaker at [2005-04-19 12:43 +0000](https://sourceforge.net/p/brainfuck/discussion/201037/thread/1622deb7/#1490/d6c2):

> Whoaaah! That's awesome piece of programming Laurent!  
> Congratulations!  
> Although you're winner already, I'll do the official testing later today and post the info in this topic. Very droolish techniques there.

Keymaker at [2005-04-19 17:14 +0000](https://sourceforge.net/p/brainfuck/discussion/201037/thread/1622deb7/#1490/e6a3):

> Here's the input data used:  
> http://koti.mbnet.fi/yiap/stuff/lbfci.txt  
> Laurent's program, awesome job in 594 instructions, got the following results:  
> Instructions executed: 1935967.  
> Memory used: 501.  
> Score: 576132163398.
