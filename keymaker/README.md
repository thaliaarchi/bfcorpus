# Brainfuck programs by Keymaker

Brainfuck programs written by Keymaker and published at [bf-hacks.org](https://web.archive.org/web/20120213092039/http://www.bf-hacks.org/).

- [digitalr.b](https://web.archive.org/web/20120214115111/http://www.bf-hacks.org/hacks/digitalr.b):
  Calculates the digital root of any given non-negative integer and then prints
  it out along with a new-line. Give the input as digits (0123456789) and use no
  other characters. The digital root of Pi's first 10000 decimals is 6.
- [isbn.b](https://web.archive.org/web/20120214115122/http://www.bf-hacks.org/hacks/isbn.b):
  Tells you if the given International Standard Book Number (ISBN) is valid or
  invalid. Since I noticed there are hyphens ('-') at different places in ISBN
  numbers, I decided it might be the best to let the user remove them. Use
  digits. If the checksum character is X, write it in as 'X' or 'x'. You can
  have list of ISBN numbers as input, separated from each other via a new-line
  (UNIX).
- [hello.b](https://web.archive.org/web/20120214115117/http://www.bf-hacks.org/hacks/hello.b):
  A Hello World language interpreter. Hello World is esoteric programming
  language (obviously a joke one), and it's quite easy to learn. It has only one
  instruction, 'h', that prints string "Hello World". Use this interpreter to
  run your HW programs. The interpreter ignores all the other characters, and
  prints "Hello World" along with a new-line every time there is 'h' in the
  source file. :)
- [beer.b](https://web.archive.org/web/20120214115101/http://www.bf-hacks.org/hacks/beer.b):
  Sings the "99 bottles of beer on the wall" song. I'll probably make a shorter
  version when I have more time. This program naturally notices to print "1
  bottle" (notice: no plural) and prints the numbers without any unneeded
  0-digits (like for example '9' instead of '09').
- [pgq.b](https://web.archive.org/web/20120214115148/http://www.bf-hacks.org/hacks/pgq.b):
  Simple polyglot quine in brainfuck and C. :) So, you can run this program, a
  quine, in your brainfuck interpreter as a brainfuck program or compile it as C
  code and run the executable -- it outputs its source in both of them, exactly
  the same way (naturally). Next time I'll try to make it shorter as well as add
  more languages in it. It uses the UNIX new-line, again.
- [morse.b](https://web.archive.org/web/20120214115137/http://www.bf-hacks.org/hacks/morse.b):
  Translates input to (International) Morse code (and doesn't print out a
  new-line after outputting the Morse code). Write in capitalized letters (A-Z).
  You can also use digits. The following characters are also ok: . , ? ' ! / ( )
  & : ; = - _ " and @. The program prints out seven spaces between the words,
  although if you have more than one space in a row the amount of spaces won't
  be correct. The program prints out also one space after each
  character-translated-to-Morse-code. In case of UNIX new-line the program
  prints out "separator within message" prosign and when the message is over it
  prints out "stop (end of message)" prosign. The program doesn't ignore other
  characters, it will crash or work as not supposed to, in case your input has
  them. I don't really like this program, but for some reason just keeping it
  here.
- [quine.b](https://web.archive.org/web/20120214115219/http://www.bf-hacks.org/hacks/quine.b):
  This is my shortest quine so far, 933 instructions! My goal was to get the
  program size below 1000 instructions, and seems I have succeeded. :)
- [abc.b](https://web.archive.org/web/20120214115047/http://www.bf-hacks.org/hacks/abc.b):
  Was my third (and final) entry to calamari's a^n b^n c^n brainfuck programming
  competition. I got my program size down to 400 instructions, but that wasn't
  even nearly enough to win, since the winning entry weighted 263 instructions.
  And after the competition was over the program was optimized even further
  (read: smaller). I also heard that my algorithm was pretty good. :) I see now
  some ways that I could have done to get it a few instructions smaller, but I
  won't modify the program anymore since the competition is over and the size is
  a nice even number now. :) When you run it, give it only characters 'a', 'b',
  and 'c' as input, followed by a terminating UNIX new-line. You can also feed
  it zero abc characters but the new-line is always required. You can give the
  abc-input in any lenght and in any order. Here's a sample input; "aaabbbccc"
  (followed by a new-line).
- [selfsize.b](https://web.archive.org/web/20120214115224/http://www.bf-hacks.org/hacks/selfsize.b):
  Is quine-styled in the sense it is self-referential (and basically exists just
  to show some fun trick without doing anything 'really useful' (like most of
  these programs) :)). This program prints out its own byte-size (31) as an
  integer and then a new-line (dec 10) after that. Getting this kind of program
  any shorter in non-wrapping cell environment may be impossible.
- [ptmbsg.b](https://web.archive.org/web/20120214115153/http://www.bf-hacks.org/hacks/ptmbsg.b):
  This is one of the best brainfuck hacks I've written, I think. This program
  generates and prints out Prouhet-Thue-Morse binary sequence values (along with
  new-lines). I must warn, this is a real memory-eater! :) The computation time
  grows fast as well; every next sequence is twice as large as the previous one.
  First the length is quite small; 1, 2, 4, 8, 16.., but soon the lengths get
  noticeable; ..8192, 16384, 32768, 65536, 131072.. Many interpreters will soon
  run out of memory.
- [kbfi.b](https://web.archive.org/web/20120214115127/http://www.bf-hacks.org/hacks/kbfi.b):
  A brainfuck interpreter written in brainfuck! This interpreter can store any
  value from zero to infinity in its memory cells! This means that I'm emulating
  infinite cell size on 8-bit cell implementation this is written on. :) This
  program has been one of the most difficult I've written so far. It's far from
  perfect, but I haven't just felt like trying to optimize the whole thing (3582
  instructions). I may do that later. Give the brainfuck program you want to
  run, as input. Separate the brainfuck program from actual the input by using
  '!' character. This interpreter will read brainfuck program until it finds '!'
  or gets to EOF. As for EOF, this interpreter returns EOF = 0 even if the
  interpreter you're running this on has EOF = no change. Oh. This program
  requires a lot memory, and preferably a fast computer to run nicely! ;) This
  program doesn't do any error checking, so run only syntaxically valid and
  working programs. If you try to output a cell value larger than 255 it
  malfunctions (for obvious reason).
- [bct.b](https://web.archive.org/web/20120214115056/http://www.bf-hacks.org/hacks/bct.b):
  A Bitwise Cyclic Tag interpreter. First feed it the BCT program data using
  characters '0' and '1'. Then input an UNIX new-line to indicate that the
  program data has been given. Then give the initial data the same way, by using
  '0' and '1' and a new-line to finish input. Then it should run your BCT
  program (naturally only if both the program data and the initial data are
  longer than of zero length). The interpreter prints out regularly the current
  memory state of the BCT program, otherwise it'd be a little difficult to know
  what is happening in the BCT program.
- [langton.b](https://web.archive.org/web/20120214115133/http://www.bf-hacks.org/hacks/langton.b):
  Langton's ant random generator. This outputs 'random' data bytes until you
  choose to terminate it. The program creates the data by emulating a 16x16 grid
  of Langton's ant with wrapping borders. The program outputs a byte every 8
  steps when 8 bits of data have been collected from the grid squares and formed
  into a byte. Initially the ant is starting at (0, 0) and is facing right. This
  program seems to be executing a lot of instructions, and therefore can be a
  bit slow to execute. It's fairly optimized, though. The idea I got for this
  months ago, but didn't really get around working on it until now. I got the
  idea when I found out the Langton's ant and read (and saw) that while its idea
  is very simple it can result to chaos very quickly, and of that I thought it
  might be good as some random generator. I've done similar program in C,
  without the output part, and ran it for more than half a day and the grid
  didn't return to the initial zero state..
- [atbash.b](https://web.archive.org/web/20120214115051/http://www.bf-hacks.org/hacks/atbash.b):
  Atbash encryption/decryption program. This program uses the Roman alphabet
  instead of the Hebrew alphabet, naturally in ASCII. When feeding "atbash" as
  input you'll get "zgyzhs" as output, and when feeding that as input, you'll
  get back to "atbash". Atbash is an ancient yet simple substitution cipher.
- [facto.b](https://web.archive.org/web/20120213092043/http://www.bf-hacks.org/hacks/facto.b):
  Factorials ahead! This program starts to print out the sequence of factorials
  and doesn't terminate by itself. Probably my best program so far. 910
  brainfuck instructions. :) The program output starts with the following: 1, 1,
  2, 6, 24, 120, 720, 5040, 40320, 362880, 3628800, 39916800, 479001600, and so
  on.
- [uload.b](https://web.archive.org/web/20120214120559/http://www.bf-hacks.org/hacks/uload.b):
  Underload interpreter written in brainfuck! :) I couldn't get one written in
  so-called 'real' languages so I wrote one in the perfect language, brainfuck.
  926 instructions. The interpreter doesn't do any kind of error handling, so
  run only perfectly valid Underload programs with it. Give an Underload program
  as input.
- [narc.b](https://web.archive.org/web/20120214115142/http://www.bf-hacks.org/hacks/narc.b):
  The first Narcissus program ever written! A narcissist program is a special
  program type that reads an input string and then checks if it matches its own
  program code, and outputs "1" only if it's exactly that, and "0" if it's not.
  This program, as can be guessed, has quinefical nature as the data the input
  is compared to is self-generated without any input.
- [collatz.b](https://web.archive.org/web/20120214115107/http://www.bf-hacks.org/hacks/collatz.b):
  Prints out the Collatz sequences for numbers, beginning with 1, never
  terminating, always increasing the number. Numbers in sequences are separated
  by a comma and space, and the actual sequences separated by a new-line. It was
  built to be fast, to some extent, and it does seem quite fast.

License: None
