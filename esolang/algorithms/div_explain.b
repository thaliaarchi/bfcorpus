x >>++++++++++<<                     // set n to 10:           0' {x} 0 n '2

[->+>-[>+>>]>[+[-<+>]>+>>]<<<<<<]    // divmod; resulting in:  0'   0  n  {0}  n%d  n/d   '4
>>[-]                                                               0  10  0   e0   e1&2

>>>++++++++++<                       // set n to 10

[->-[>+>>]>[+[-<+>]>+>>]<<<<<]       // divmod; resulting in:  3'   e0 _  {0}  e1  e2   '7
>[-]

>>                                   // all digits separated:  0'   x  _  e0  _  _  e1  {e2}  '7

[                                    // if e2 then:
    >++++++[-<++++++++>]                         add 48 (ascii 0)
    <.                                           print e2
    <<+                                          add one to _ {_} e1    (to flag that e2 was not zero)
    >+                                           add one to e1
    >[-]                                         clear e2
]
<
[                                    // if e1 || e2 then:     (one was added to e1 when e2 was processed)
    <[->-<]                                      if flag was set; remove one from e1
    ++++++[->++++++++<]                          add 48 (ascii 0)
    >.                                           print e1
    [-]                                          clear e1
]

<<
++++++[-<++++++++>]                  // add 48 (ascii 0)
<.                                   // print e0   (always printed)
[-]                                  // clear e0
<<[-<+>]                             // move x from '1 to '0
<                                    // {x} (8 cells used)
