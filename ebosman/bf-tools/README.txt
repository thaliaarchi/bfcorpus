Here are some tools I wrote to run and develop brainf*** programs

bf      An 8 bit Brainf*** interpreter

bf16    A 16 bit Brainf*** interpreter

bfstrip A Brainf*** 'optimizer'

        Filters out:
             comments,
             useless sequences, >><<> becomes >,  -+-+- becomes -,

        Prints a newline after every 80th character,

        I find bfstrip usefull in combination with the c-preprocessor.

Have fun!

Erik Bosman

