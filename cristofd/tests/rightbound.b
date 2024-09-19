+[>+++++++++++++++++++++++++++++++++.]
[This tests the array bounds checking to the right. Bounds checking is not
essential, and in a high-level implementation it is likely to introduce
extra overhead. In a low-level implementation you can get bounds checking
for free by using the OS's own memory protections; this is the best
solution, which may require making the array size a multiple of the page
size.
Anyway. This program measures the "real" size of the array, in some sense,
in cells right of the initial cell. It outputs the result in unary; the
easiest thing is to direct it to a file and measure its size, or (on Unix)
pipe the output to wc. If bounds checking is present and working, it
should be the array size minus one.
Daniel B Cristofani (cristofdathevanetdotcom)
http://www.hevanet.com/cristofd/brainfuck/]
