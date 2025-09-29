[
  Reads a number from the cursor and writes h(n) to cursor + 5
  http://codegolf.stackexchange.com/a/4473/3428
]

[  while n != 0
  [  div 2 loop
    -
    >+<  marker for if/else
    [->->>>+<<]  if n != 0 inc n/2
    >
    [->>>>+<<]  else inc h(n)
    <<<
  ]
  >>>>  move n/2 back to n
  [-<<<<+>>>>]
  <<<<
]
