[
  This program reads brainfuck code and outputs
  a minified version of it; it basically just removes
  any non-brainfuck symbol

  http://codegolf.stackexchange.com/a/4815/3428
]

>>>,
[
[->+>+<<]             copy input

<<<+++++++++++++      fill cell with 13 for subtraction
[->+>+>+<<<]          and duplicate some times

>>>[->---<]           sub 39
>----                 43

[                     plus
-
[                     comma
-
[                     minus
-
[                     dot

<<[->>-<<]>>-         60

[                     less than
--
[                     greater than

<<<[->>>--<<<]>>>     86
---                   91

[                     open square bracket
--
[                     closing square bracket

>[-]                  remove copy

]]]]]]]]

>[.[-]>]              the copy has not been removed; print

<<[-]<<<[-]>[-]>      clean up

,]
