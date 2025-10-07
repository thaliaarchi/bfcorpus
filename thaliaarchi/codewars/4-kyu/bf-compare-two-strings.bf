Compares two comma separated strings for equality

>+[,>++++[>+++++++++++<-]<[->+>-<<]>>]    Read left string into even cells starting at cell 2
<[-]<<[<<]>>                              Clear comma and scan back to cell 2
>,[>>,]                                   Read right string into odd cells starting at cell 3
<<[<<]>                                   Scan back to cell 2
[                                         While left char nonzero:
  [>-<-]                                    Subtract left char from right char
  >[<<]>                                    If right char nonzero: stay at zero
]
+++++++++[<++++++++++++>-]                Set to 108
+                                         Set flag
>[                                        If mismatched char or length:
  <-<                                       Clear flag
  ------.                                   Print f (102)
  -----.                                    Print a (97)
  +++++++++++.                              Print l (108)
  +++++++.                                  Print s (115)
  >>[-]
]
<[                                        If equal:  
  -<                                        Clear flag
  ++++++++.                                 Print t (116)
  --.                                       Print r (114)
  +++.                                      Print u (117)
  --                                        Set to 115
  >
]
<--------------.                          Print e (101)