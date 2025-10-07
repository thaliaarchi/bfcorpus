[
  Multiply
  The program below should receive exactly
  two bytes of input, multiply them together
  and output the resulting byte as an ASCII
  character
  
  Example:
  Input - byte(3), byte(5)
  Output - byte(15)
  
  The program isn't working.  Try to figure out why.
  (Don't worry about cell overflow - this will not be tested)
]

[
  Original:
  .>.<[->[->+>+<<]>>[-<<+>>]<<<]>>,
]

[
  Annotated:
  ,             a = read
  >,            b = read
                c = 0
                d = 0
  <[            while a != 0
    -             a--
    >[->+>+<<]    c += b, d += b, b = 0
    >>[-<<+>>]    b += d, d = 0
    <<<
  ]
  >>.           print c
]

,>,<[->[->+>+<<]>>[-<<+>>]<<<]>>.