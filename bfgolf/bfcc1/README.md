# Brainfuck Component Competition 1: Reverse

- https://web.archive.org/web/20050214232202/http://info1.info.tampere.fi:80/~lhetuhe/bfcc/
- https://web.archive.org/web/20041119063025/http://info1.info.tampere.fi:80/~lhetuhe/bfcc/comp1.html
- https://web.archive.org/web/20041204185743/http://info1.info.tampere.fi:80/~lhetuhe/bfcc/bfcc1.txt
- https://www.brainfuck.org/bfcc1.txt
- https://web.archive.org/web/20200203161446/http://www.hevanet.com/cristofd/brainfuck/bfcc1.txt
- http://lvogel.free.fr/bf.html
- http://cl-informatik.uibk.ac.at/users/bf3/bfgolf/bfcc1/
- http://cl-informatik.uibk.ac.at/users/bf3/bfgolf/reverse.html
- http://www.inf.tu-dresden.de/~bf3/bfgolf/bfcc1/

This competition was organized by Keymaker.
It was open through 2004-10-14.
MD5 digests are computed from programs with comments removed, except for those
marked with an \*, which have a letter appended to disambiguate.

TODO: I removed Bertram's header comments. Verify whether they counted for
scoring and, if not, reintroduce them.

| Source submission (UTC) | Author               | Size       | Source                  | MD5                                | Note |
| ----------------------- | -------------------- | ---------- | ----------------------- | ---------------------------------- | ---- |
| 2004-10-16 00:20        | Jeffrey Lee          | 133 bytes  | 133jeffrey.b            | 8631c791b5f534b21e4c3c7e1ac75c69   |      |
| 2004-10-16 00:20        | Jeffrey Lee          | 114 bytes  | 114jeffrey.b            | c33d88227e2f7574510915fd0f479388   |      |
| 2004-10-16 00:20        | Jeffrey Lee          | 92 bytes   | 92jeffrey.b             | e3482785e7b6d2fc282ba89a84fdd618   |      |
| 2004-10-16 00:20        | Jeffrey Lee          | 84 bytes   | 84jeffrey.b             | d9ab9dab32a698a4f61271fbeed1806e   |      |
| 2004-10-16 00:20        | Jeffrey Lee          | 65 bytes   | 65jeffrey.b             | 83a953cbb06685db4aacc70df48911fd   |      |
| 2004-10-16 00:20        | Jeffrey Lee          | 1021 bytes | 1021jeffrey.b           | f3fa783bebbdfc3d53d0298cdcb2c279   |      |
| 2004-10-16 00:20        | Jeffrey Lee          | 578 bytes  | 578jeffrey.b            | 1176af00112642c54207015033edc3ab   |      |
| 2004-10-16 01:08        | Daniel B. Cristofani | 335 bytes  | 335daniel.b             | *N/A (Not competing)*              | I did my usual trick of procrastinating until the last minute in order to avoid producing an imperfect program, followed by desperate floundering. Here's my latest, which is incomplete and also still has bugs that I haven't been able to trace yet. Naturally this doesn't count as an entry. |
| 2004-10-16 04:50        | Ricardo Bittencourt  | 52 bytes   | 52ricardo.b             | a057b19f19cdba55303e95215fc89b84\* | repost, with 'R' added in the end |
| 2004-10-16 12:04        | Felix Nawothnig      | 108 bytes  | 108felix.b              | 29cdd0e977c848b403667a138fd41ef4   |      |
| 2004-10-16 12:04        | Felix Nawothnig      | 78 bytes   | 78felix.b               | f3e0b4231aaab9e950989c6a95a040af   |      |
| 2004-10-16 12:04        | Felix Nawothnig      | 70 bytes   | 70felix.b               | 5e16eef7316f056286f55c80b9d4f54f   |      |
| 2004-10-16 14:14        | Keymaker             | 121 bytes  | 121keymaker.b           | 472330d2e8323c37b87ccd5579c8ac26   | the longer and not-so-good one |
| 2004-10-16 14:14        | Keymaker             | 63 bytes   | 63keymaker.b            | ffdaec6c8a0ebc1fc949afb2b1855ad8   | the newer one |
| 2004-10-16 19:20        | David Greenspan      | 52 bytes   | 52davidg.b              | d090e203aed6b8ef518d07fc03213987\* | (repost) + 'D' |
| 2004-10-16 19:20        | David Greenspan      | 80 bytes   | 80davidg.b              | 2dfaebfaf633fb9c43df43d7d866022f   |      |
| 2004-10-16 20:29        | Daniel B. Cristofani | 470 bytes  | 470daniel.b             | *N/A (Not competing)*              | Okay, it's still spectacularly graceless but at least it seems to work now. |
| 2004-10-17 04:55        | Daniel B. Cristofani | 78 bytes   | 78daniel.b              | f3e0b4231aaab9e950989c6a95a040af   |      |
| 2004-10-17 04:55        | Daniel B. Cristofani | 52 bytes   | 52daniel.b              | 5e86646ea70b473b8ddb9ecba64c64d6\* |      |
| 2004-10-17 04:59        | Daniel B. Cristofani | 716 bytes  | 716daniel.b             | *N/A (Not competing)*              | And, just for fun                                                                                                                                                                                                                                                                                 |
| 2004-10-17 17:06        | Bertram Felgenhauer  | 75 bytes   | 75bertram.b [^bertram]  | ac3b53b4a7b08a916851bdf40af3410a   |      |
| 2004-10-17 17:06        | Bertram Felgenhauer  | 50 bytes   | 50bertram.b [^bertram]  | 8e4bd6892dc4f5863560af53f6242d1b   |      |
| 2004-10-17 17:06        | Bertram Felgenhauer  | 630 bytes  | 630bertram.b [^bertram] | 5b526e50545144e7b0e4f8b8f7e15e8a   |      |
| 2004-10-17 17:06        | Bertram Felgenhauer  | 578 bytes  | 578bertram.b [^bertram] | dc073264b3bf6d9b5057692e021bb650   |      |
| 2004-10-17 17:06        | Bertram Felgenhauer  | 365 bytes  | 365bertram.b [^bertram] | ee7865d31fd5c7aa315eb9db3f2b1b9d   |      |
| 2004-10-17 20:46        | Laurent Vogel        | 476 bytes  | [476laurent.b]          | 14025ab126b6d87ab8f18f87e137e82a   | Here is my (probably) best entry (g1) |
| 2004-10-17 20:46        | Laurent Vogel        | 52 bytes   | 52laurent.b             | 2cd7668832b8210e259b02e1c24a0e91   |      |
| 2004-10-17 20:46        | Laurent Vogel        | 459 bytes  | 459laurent.b            | f9f98d2333ce9ee752149da614e315ca   | (e6) |
| 2004-10-17 20:46        | Laurent Vogel        | 463 bytes  | 463laurent.b            | 13cbf2323e6d275b7b64baf6a22efa0b   | e8 (a dubious improvement over e6) |
| 2004-10-17 20:46        | Laurent Vogel        | 499 bytes  | 499laurent.b            | 792a7386fc301a5dab1ad6316a3f7e31   | e7 (a faster variant of e6, depending on the data) |
| 2004-10-17 20:46        | Laurent Vogel        | 410 bytes  | 410laurent.b            | 4001ce3839e19340d6ce9d9e02899314   | ea (typically 30% faster than e8) |
| 2004-10-17 20:46        | Laurent Vogel        | 382 bytes  | 382laurent.b            | 85bae7b7a0d01a544b96178cdb91cf63   |      |
| 2004-10-17 20:46        | Laurent Vogel        | 370 bytes  | 370laurent.b            | 517772d1eeb4126075fd496a24d5e581   | (f9) |
| 2004-10-17 20:46        | Laurent Vogel        | 354 bytes  | 354laurent.b            | 3b3539a7c63043fe152962fe47038ed9   | (f5a) |
| 2004-10-17 20:46        | Laurent Vogel        | 78 bytes   | 78laurent.b             | 71cf13f5aafe32f156c4c61fa0fdcd6a   |      |
| 2004-10-18 07:36        | Sean Colombo         | 161 bytes  | 161sean.b               | 504a72636bfbcd49248d52fc6eca6009   |      |
| 2004-10-25 17:35        | Bertram Felgenhauer  | 57 bytes   | 57bertram.b [^bertram]  | *N/A (Not competing)*              |      |
| 2004-10-25 17:35        | Bertram Felgenhauer  | 52 bytes   | 52bertram.b [^bertram]  | *N/A (Not competing)*              |      |
| 2004-10-25 17:35        | Bertram Felgenhauer  | 954 bytes  | 954bertram.b [^bertram] | *N/A (Not competing)*              |      |
| 2004-10-25 17:35        | Bertram Felgenhauer  | 598 bytes  | 598bertram.b [^bertram] | *N/A (Not competing)*              |      |
| 2004-10-25 17:35        | Bertram Felgenhauer  | 391 bytes  | 391bertram.b [^bertram] | *N/A (Not competing)*              |      |
| 2004-10-25 17:35        | Bertram Felgenhauer  | 379 bytes  | 379bertram.b [^bertram] | *N/A (Not competing)*              |      |
| 2004-10-25 17:35        | Bertram Felgenhauer  | 7221 bytes | [7221bertram.b]         | *N/A (Not competing)*              |      |
| *Not submitted*         | Dean Scarff          | 67 bytes   | *N/A*                   | 4756bd1d894f28b86395d68c0652cdde   |      |

[476laurent.b]: http://lvogel.free.fr/rev476bf.txt
[7221bertram.b]: http://cl-informatik.uibk.ac.at/users/bf3/bfgolf/bfcc1/reverse.long
[^bertram]: Split from bertram_scratch.b.orig from <http://cl-informatik.uibk.ac.at/users/bf3/bfgolf/bfcc1/reverse.b>,
  which was formerly hosted at <http://www.inf.tu-dresden.de/~bf3/bfgolf/bfcc1/reverse.b>
  (dead, not archived)
