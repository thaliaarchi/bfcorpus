# Bad Apple by anna4d

The full Bad Apple video printed by a Brainfuck program by anna4d. Source
available on [GitHub](https://github.com/ThereAre12Months/BadAppleBF) and video
posted to [r/badapple](https://www.reddit.com/r/badapple/comments/1psa2j1/bad_apple_in_the_brainfuck_programming_language/)
and [YouTube](https://www.youtube.com/watch?v=pzIY1jcyjZc).

- bad_apple_129x48p.b: Bad Apple in 129x48 ASCII resolution
- bad_apple_257x96p.b: Bad Apple in 257x96 ASCII resolution
- bad_apple_512x192p.b: Bad Apple in 512x192 ASCII resolution

The programs are compressed as 3.9M, 9.6M, and 24M .tar.gz files and not
included here.

<details>
<summary>With zstd, they can be compressed to a single 21M file.</summary>

```sh
gunzip *.gz
mv bad_apple_129x48p.b.tar bad_apple.tar
tar --concatenate -f bad_apple.tar bad_apple_257x96p.b.tar
tar --concatenate -f bad_apple.tar bad_apple_512x192p.b.tar
zstd --ultra -22 --long=27 --threads=0 bad_apple.tar -o bad_apple.tar.zst
```

</details>

License: Unlicense
