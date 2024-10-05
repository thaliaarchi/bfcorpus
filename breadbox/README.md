# Brainfuck programs by Brian Raiter

Brainfuck programs written by Brian Raiter, posted on their [website](https://www.muppetlabs.com/~breadbox/bf/)
and distributed with [ebfc](https://github.com/BR903/ELFkickers/tree/master/ebfc).
They also built ebfc, a Brainfuck compiler to 64-bit ELF in C which is part of
[ELFkickers](https://www.muppetlabs.com/~breadbox/software/elfkickers.html),
and a small [Brainfuck compiler for Linux](http://www.muppetlabs.com/~breadbox/software/tiny/bf.asm.txt)
ELF in x86 assembly.

- quine.b: An 822-byte quine.
  [[muppetlabs](https://www.muppetlabs.com/~breadbox/bf/quine.b.txt),
  [ebfc](https://github.com/BR903/ELFkickers/blob/master/ebfc/bf/factor.b)]
- factor.b: A program that factors arbitrarily large integers in an arbitrarily
  large amount of time — and what may have been, at the time that I wrote it,
  the largest Brainfuck program in existence.
  [[muppetlabs](https://www.muppetlabs.com/~breadbox/bf/factor.b.txt),
  [ebfc](https://github.com/BR903/ELFkickers/tree/master/ebfc)]
- hello.b: Prints "hello, world\n".
  [[ebfc](https://github.com/BR903/ELFkickers/blob/master/ebfc/bf/hello.b)]

In version 1.0 of ebfc, the copyright date in factor.b was changed from “1999”
to “1999-2001”. I use the older version from muppetlabs, since it is more widely
distributed and the changes made in 2001 were to ebfc, not factor.b.

License: [GPL-2.0-or-later](https://github.com/BR903/ELFkickers/blob/master/COPYING)

## Third party

ebfc contains prime.b by Urban Müller with trailing whitespace removed:
ebfc/bf/prime.b -> ../umueller/prime.b
