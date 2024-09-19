[ This is a binary counter benchmark program, it runs   ]
[ 1.1259e+16 instructions and is mostly unoptimisable.  ]
[ As it runs it prints the letters of the alphabet with ]
[ a delay that quadruples between each letter.          ]
[ Robert de Bath  2015, 2020                            ]

>++++++++[>++++++>>>++++++++<<<<-]>++<<
+[>                 // The loop flag
    >>[>>]          // Find first zero
    <[              // Check for the term flag
        [->>+<<]    // if found move it up one
        >>
    >[+.[->>>>+<<<<]]<

        -[<<]       // Decrement and finish on zero
    ]>              // Back to the zero
    +               // Make the zero a one
    <<[-<<]         // Remove all the carried ones
<]                  // and loop
++++++++++.[-]      // NL
