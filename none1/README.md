# Brainfuck programs by None1

Brainfuck programs by None1, published on the Esolang wiki. They are also the
creator of the [BFFuck](bffuck/README.md) language, which compiles to Brainfuck.

- kolakoski.b: A program that prints out the Kolakoski sequence. As the sequence
  is infinitely long, this program never terminates. [^wiki-bf] [^git]
  [^esofiles]
- rng.b: A simple random number generator with a period of 63253. Also never
  terminates. [^wiki-bf] [^git]
- nevergonna.b: Never gonna give you up player. Works when running in
  [BrainFuckConsole74](https://www.brainfuckconsole74.ch/?code=BFC4%20BFCE%0A+++++___%23+%23+%23%23+%23--%23-%23-%23%3E%20%5BWe%27re%20no%20strangers%20to%20love%5D%3C%0A+%23_%23+_%23+_%23--%23-%23+++++++%23______%23---%23%20%3E%5BYou%20know%20the%20rules%20and%20so%20do%20I%5D%3C%0A---%23_%23+%23+%23--%23++%23+%23_--%23-%23-%23%20%3E%5BA%20full%20commitment%20is%20what%20I%27m%20thinking%20of%5D%3C%0A+%23%23+%23+%23--%23-%23++++%23%23%23+%23-%23%20%3E%5BYou%20wouldn%27t%20get%20this%20from%20any%20other%20guy%5D%3C%0A-%23___+%23+%23--%23+%23%23%23+%23-%23----%23%20%3E%5BI%20just%20wanna%20tell%20you%20how%20I%27m%20feeling%5D%3C%0A+%23+%23+%23--%23___+++%23+%23-%23%20%3E%5BGotta%20make%20you%20understand%5D%3C%0A%0A----%23+%23++%23--%23++++%23_%23-%23%20%3E%5BNever%20gonna%20give%20you%20up%5D%3C%0A----%23+%23+++%23----%23++++%23_%23-%23%20%3E%5BNever%20gonna%20let%20you%20down%5D%3C%0A---%23+%23++%23--%23++%23+%23--%23-%23-%23++++%23_-%23+%20%3E%5BNever%20gonna%20run%20around%20and%20desert%20you%5D%3C%0A----%23+%23++%23--%23++++%23_%23-%23%20%3E%5BNever%20gonna%20make%20you%20cry%5D%3C%0A----%23+%23++%23--%23++++++%23-----_%23+%23%20%3E%5BNever%20gonna%20say%20goodbye%5D%3C%0A---%23+%23++%23--%23++%23+%23--%23-%23-%23++++%23_-%23+%20%3E%5BNever%20gonna%20tell%20a%20lie%20and%20hurt%20you%5D%3C%0A%0A-%23%23--%23++%23+%23_--%23-%23-%23%20%3E%5BWe%27ve%20known%20each%20other%20for%20so%20long%5D%3C%0A+%23%23+%23+%23--%23-%23+++++++%23%23---%23+%23-%23-%23%20%3E%5BYour%20heart%27s%20been%20aching%20but%2C%20your%20too%20shy%20to%20say%20it%5D%3C%0A%23%23--%23++%23--%23++%23+%23_--%23-%23-%23%20%3E%5BInside%20we%20both%20know%20what%27s%20been%20going%20on%5D%3C%0A+%23%23+%23+%23--%23-%23++++%23%23+%23%23-%23%20%3E%5BWe%20know%20the%20game%20and%20we%27re%20gonna%20play%20it%5D%3C%0A-%23___+%23+%23-%23%23%23+%23-%23----%23%20%3E%5BAnd%20if%20you%20ask%20me%20how%20I%27m%20feeling%5D%3C%0A-%23++%23+%23+%23--%23___+++%23+%23-%23%20%3E%5BDon%27t%20tell%20me%20you%27re%20too%20blind%20to%20see%5D%3C%0A%0A----%23+%23++%23--%23++++%23_%23-%23%20%3E%5BNever%20gonna%20give%20you%20up%5D%3C%0A----%23+%23+++%23----%23++++%23_%23-%23%20%3E%5BNever%20gonna%20let%20you%20down%5D%3C%0A---%23+%23++%23--%23++%23+%23--%23-%23-%23++++%23_-%23+%20%3E%5BNever%20gonna%20run%20around%20and%20desert%20you%5D%3C%0A----%23+%23++%23--%23++++%23_%23-%23%20%3E%5BNever%20gonna%20make%20you%20cry%5D%3C%0A----%23+%23++%23--%23++++++%23-----_%23+%23%20%3E%5BNever%20gonna%20say%20goodbye%5D%3C%0A---%23+%23++%23--%23++%23+%23--%23-%23-%23++++%23_-%23+%20%3E%5BNever%20gonna%20tell%20a%20lie%20and%20hurt%20you%5D%3C%0A%0A----%23+%23++%23--%23++++%23_%23-%23%20%3E%5BNever%20gonna%20give%20you%20up%5D%3C%0A----%23+%23+++%23----%23++++%23_%23-%23%20%3E%5BNever%20gonna%20let%20you%20down%5D%3C%0A---%23+%23++%23--%23++%23+%23--%23-%23-%23++++%23_-%23+%20%3E%5BNever%20gonna%20run%20around%20and%20desert%20you%5D%3C%0A----%23+%23++%23--%23++++%23_%23-%23%20%3E%5BNever%20gonna%20make%20you%20cry%5D%3C%0A----%23+%23++%23--%23++++++%23-----_%23+%23%20%3E%5BNever%20gonna%20say%20goodbye%5D%3C%0A---%23+%23++%23--%23++%23+%23--%23-%23-%23++++%23_-%23+%20%3E%5BNever%20gonna%20tell%20a%20lie%20and%20hurt%20you%5D%3C%0A%0A-%23%23--%23++%23+%23_--%23-%23-%23%20%3E%5BWe%27ve%20known%20each%20other%20for%20so%20long%5D%3C%0A+%23%23+%23+%23--%23-%23+++++++%23%23---%23+%23-%23-%23%20%3E%5BYour%20heart%27s%20been%20aching%20but%2C%20your%20too%20shy%20to%20say%20it%5D%3C%0A%23%23--%23++%23--%23++%23+%23_--%23-%23-%23%20%3E%5BInside%20we%20both%20know%20what%27s%20been%20going%20on%5D%3C%0A+%23%23+%23+%23--%23-%23++++%23%23+%23%23-%23%20%3E%5BWe%20know%20the%20game%20and%20we%27re%20gonna%20play%20it%5D%3C%0A%0A-%23___+%23+%23--%23+%23%23%23+%23-%23----%23%20%3E%5BI%20just%20wanna%20tell%20you%20how%20I%27m%20feeling%5D%3C%0A%0A+%23+%23+%23--%23___+++%23+%23-%23%20%3E%5BGotta%20make%20you%20understand%5D%3C%0A%0A----%23+%23++%23--%23++++%23_%23-%23%20%3E%5BNever%20gonna%20give%20you%20up%5D%3C%0A----%23+%23+++%23----%23++++%23_%23-%23%20%3E%5BNever%20gonna%20let%20you%20down%5D%3C%0A---%23+%23++%23--%23++%23+%23--%23-%23-%23++++%23_-%23+%20%3E%5BNever%20gonna%20run%20around%20and%20desert%20you%5D%3C%0A----%23+%23++%23--%23++++%23_%23-%23%20%3E%5BNever%20gonna%20make%20you%20cry%5D%3C%0A----%23+%23++%23--%23++++++%23-----_%23+%23%20%3E%5BNever%20gonna%20say%20goodbye%5D%3C%0A---%23+%23++%23--%23++%23+%23--%23-%23-%23++++%23_-%23+%20%3E%5BNever%20gonna%20tell%20a%20lie%20and%20hurt%20you%5D%3C%0A%0A----%23+%23++%23--%23++++%23_%23-%23%20%3E%5BNever%20gonna%20give%20you%20up%5D%3C%0A----%23+%23+++%23----%23++++%23_%23-%23%20%3E%5BNever%20gonna%20let%20you%20down%5D%3C%0A---%23+%23++%23--%23++%23+%23--%23-%23-%23++++%23_-%23+%20%3E%5BNever%20gonna%20run%20around%20and%20desert%20you%5D%3C%0A----%23+%23++%23--%23++++%23_%23-%23%20%3E%5BNever%20gonna%20make%20you%20cry%5D%3C%0A----%23+%23++%23--%23++++++%23-----_%23+%23%20%3E%5BNever%20gonna%20say%20goodbye%5D%3C%0A---%23+%23++%23--%23++%23+%23--%23-%23-%23++++%23_-%23+%20%3E%5BNever%20gonna%20tell%20a%20lie%20and%20hurt%20you%5D%3C%0A%0A----%23+%23++%23--%23++++%23_%23-%23%20%3E%5BNever%20gonna%20give%20you%20up%5D%3C%0A----%23+%23+++%23----%23++++%23_%23-%23%20%3E%5BNever%20gonna%20let%20you%20down%5D%3C%0A---%23+%23++%23--%23++%23+%23--%23-%23-%23++++%23_-%23+%20%3E%5BNever%20gonna%20run%20around%20and%20desert%20you%5D%3C%0A----%23+%23++%23--%23++++%23_%23-%23%20%3E%5BNever%20gonna%20make%20you%20cry%5D%3C%0A----%23+%23++%23--%23++++++%23-----_%23+%23%20%3E%5BNever%20gonna%20say%20goodbye%5D%3C%0A---%23+%23++%23--%23++%23+%23--%23-%23-%23++++%23_-%23+%20%3E%5BNever%20gonna%20tell%20a%20lie%20and%20hurt%20you%5D%3C&in=).
  [^nevergonna]

[^wiki-bf]: [User:None1/BF](https://esolangs.org/wiki/User:None1/BF)
  page on the Esolang wiki, revision [2024-05-14 12:10:30](https://esolangs.org/w/index.php?title=User:None1/BF&oldid=127946)
[^git]: BF repository on [GitHub](https://github.com/none-None1/BF)
[^esofiles]: PR#10 "Add my kolakoski program in BF?" in
  [The Esoteric File Archive](https://github.com/graue/esofiles/pull/10)
[^nevergonna]: [User:None1](https://esolangs.org/wiki/User:None1#Never_gonna_give_you_up_player_in_brainfuck)
  page on the Esolang wiki, revision [2024-10-01T01:10:43](https://esolangs.org/w/index.php?title=User:None1&oldid=141719)

License: CC0 1.0 Universal [[1](https://github.com/none-None1/none-None1),
[2](https://github.com/graue/esofiles/pull/10#issuecomment-1891928115),
[3](https://esolangs.org/wiki/Esolang:Copyrights)]

## Third-party

Example programs from [BrainFExec](https://github.com/none-None1/BrainFExec/tree/main/examples):

- dbfi.bf -> ../cristofd/dbfi.b
- hello.bf -> ../esolang/brainfuck/hello_world/hello_world1.b (without comments)

### TODO

These do not match the current versions on the Esolang wiki:

- looping_counter.bf
- truth_machine.bf
