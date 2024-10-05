Contest 2 was sorting. In particular, the task was to produce a brainfuck
program, compatible with the general Brainfuck Golf rules, that:
-reads input which may consist of any nonnegative number of bytes with values
in the range 1-255, terminated by a 0.
-outputs the bytes read (excluding the final 0) in ascending order (obviously,
preserving the length of the file and the counts of the individual characters).
Again, Bertram Felgenhauer and I tied, with identical 50-byte solutions.
-Daniel.

Here are the valid entries:


Daniel B. Cristofani.
File consists of next two lines terminated with UNIX newlines (10):
Selection sort: decrement; for zeroes output & close gaps; repeat
>>,[>>,]<<[[-<+<]>[>[>>]<[.[-]<[[>>+<<-]<]>>]>]<<]


entry for brainfuck golf #2 by Bertram

>>,[>>,]<<
        create a fine interleaved array of the characters to be sorted
        0 0 c1 0 c2 ::: 0 *cn 0 0|
[
        loop while there are characters left
        0 x c1 x c2 ::: x *cn 0 0| (x = number of outer loops executed)
  [-<+<]>
        decrement all characters by one; increment every x by one
        0 *x' c1' x' c2' ::: x' cn' 0 0| (note that x' != 0)
  [
        now walk through the whole array
        0 *x' c1' ::: x' cn' 0 0|
    >[>>]<
        and search for characters which were just decremented to zero
        0 x' c1' ::: *x' 0 ::: x' cn' 0 0| or 0 x' c1' ::: x' cn' *0 0|
    [
        we found one
        0 x' c1' ::: *x' 0 ::: x' cn' 0 0|
      .[-]<[[>>+<<-]<]>>
        print x' (which is equal to the original character's value)
        then delete this x' and move everything in the left of the
        current pointer two to the right
        0 0 *0 x' c1' ::: x' c(n')' 0 0|
    ]
        0 0 *0 x' c1' ::: x' c(n')' 0 0| or 0 x' c1' ::: x' cn' *0 0|
    >
        check whether we've walked through the whole array or found a
        zero; scan the array for zeroes again in the latter case
        0 *x' c1' ::: x' c(n')' 0 0| or 0 x' c1' ::: x' cn' 0 *0| or 0 *0 0|
  ]
  <<
        align the pointer and check if there are characters left
        0 x' c1' x' c2' ::: x' *cn' 0 0|
]

used memory: 2n plus 3 cells where n is the number of bytes of input


David Greenspan
51
Submission is the following 6 lines, each ended with a carriage return (I submitted from my Mac):
>>,[>>,]<<
[
[-<+<]
>>[>>]<[.<[[>>+<<-]<<]>>>>[>>]<]
<
]


>>,[<<[[-<+>>>-[>]<<[->>+<<]>[<]<]<[->+>>+<<<]<]>>[>>],]<<[<<]>>[.>>] This would have been 6 bytes shorter if descending order would have been ok Made By: NYYRIKKI 2002


David S.
56 bytes
+>>+>,[>,]<[-[<-]<[>>[+[<+>-]>]<<[<]>-<<.->]<+>>+>>[>]<]
(which I md5sum'ed without the linefeed, to avoid that problem.)


51 bytes
Laurent Vogel
>>,[>+>,]<<[[-<<]>+[>]>[-<<[[->>+<<]<]>>>.[>]>]<<<]


sort / version 2
"conservative" interpretation of the rules
Laurent Vogel

memory: entries consisting of ( a b x y )
x = 1 when the entry is done
y = 1 for all living entries
entries done which are on the far left are disposed of by
marking them y = 0; when no more entry exists whose y == 1 then
the progam stops

leave y = 0
>
read until EOF leaving 0 1 between chars read:
,[>>>+>,]

(a 0 0 1) _0
<
while y
[
[
<
skip entries whose x = 1
[<<<<]
set y = 0 and move to a
>- <<<
_a b 0 0
[->+>]
_0 b 0 0 if a == 0
a' b'_0 0 if a != 0
>
0 _b 0 0 if a == 0
a' b' 0 _0 if a != 0
[.>+>]
0 b 1 _0 if a == 0 after having printed b
a' b' 0 _0 if a != 0
restore y = 1
+
move to next entry
<<<<
loop back
]
now y == 0
while x == 1 set y = 0
>>>[>->>>]>
while y move to next entry
[>>>>]
back to last entry whose y == 1 if any
<<<<
loop again except if no more valid entry
in latter case exit the loop and stop
]


And of potential interest, a 51-byte version by Bertram Felgenhauer,
not entered, that uses about half the memory:

+>>+[>,]<
[
  [>]<
  -[<-]
  c 0 1 ::: *0 ::: or c 0 *0 :::
  +<[
    >>[[<+>-]+>]<-<[<]<.->
  ]
  c *0 0 ::: or ??
  <+>>>
]
