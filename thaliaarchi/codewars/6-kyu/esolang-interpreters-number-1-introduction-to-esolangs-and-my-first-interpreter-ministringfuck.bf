Cells:
  0 value
  1 op
  2 counter/flag

>,                        Read op
[
  >++++++[<------->-]<-   Subtract 43 (plus)
  [                       If not plus:
    >+<                     Set flag
    ---[[-]>-<]             If not period: clear flag
    >[-<<.>>]<              If flag (period): print value
    <->                     Decrement value
  ]
  <+                      Increment value
  >,                      Read op
]
