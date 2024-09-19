[ Simple RNG that uses this generator: f[i]=(f[i-1]+f[i-2]+f[i-3])%251, f[-2]=f[-1]=f[0]=1. Its period is 63253. Generates characters from 0 to 250.]
+>>+>>+>+ ; Initialize the first three terms and the infinite loop flag
[ ; Infinite loop
    >>>++++++++++++++[<++++++++++++++++++>-]<-<< ; Initialize 251 (the divisor)
    -<[>>+[>->+<[>]>[<+>-]<<[<]>-]>>[<+<+>>-]>+<<<<<-]>>>>>[<<<<<+>>>>>-] ; Add the previous term using modulus algorithm
    <<<<<
    <<[>>>>+[>->+<[>]>[<+>-]<<[<]>-]>>[<+<+>>-]>+<<<<<<<-]>>>>>>>[<<<<<<<+>>>>>>>-] ; Add the term before previous term using modulus algorithm
    <<<<<<<
    <<[>>>>>>+[>->+<[>]>[<+>-]<<[<]>-]>>[<+<+>>-]>+<<<<<<<<<-]>>>>>>>>>[<<<<<<<<<+>>>>>>>>>-] ; Add the term before the term before previous term using modulus algorithm
    <<<.>[-]+ ; Move to infinite loop flag
]