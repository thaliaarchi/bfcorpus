# [Put your source here.](https://sourceforge.net/p/brainfuck/discussion/201037/thread/ed364605/)

Nobody/Anonymous at [2002-12-24 00:12 +0000](https://sourceforge.net/p/brainfuck/discussion/201037/thread/ed364605/#378b):

> For instance:  
> Daniel B. Cristofani.  
> File consists of next two lines terminated with UNIX newlines (10):  
> Selection sort: decrement; for zeroes output & close gaps; repeat  
> >>,[>>,]<<[[-<+<]>[>[>>]<[.[-]<[[>>+<<-]<]>>]>]<<]

Nobody/Anonymous at [2002-12-24 00:22 +0000](https://sourceforge.net/p/brainfuck/discussion/201037/thread/ed364605/#378b/a5f8):

> Alternately:  
> Daniel B. Cristofani.  
> http://www.cs.pdx.edu/~cristofd/golf2.b

Nobody/Anonymous at [2002-12-24 11:39 +0000](https://sourceforge.net/p/brainfuck/discussion/201037/thread/ed364605/#378b/ecac):

> Bertram Felgenhauer  
> http://www.inf.tu-dresden.de/~bf3/bfgolf/2/entry.14dec02

Nobody/Anonymous at [2002-12-24 17:16 +0000](https://sourceforge.net/p/brainfuck/discussion/201037/thread/ed364605/#378b/9c51):

> David Greenspan  
> 51  
> Submission is the following 6 lines, each ended with a carriage return (I submitted from my Mac):  
> >>,[>>,]<<  
> [  
> [-<+<]  
> >>[>>]<[.<[[>>+<<-]<<]>>>>[>>]<]  
> <  
> ]

Nobody/Anonymous at [2002-12-25 00:18 +0000](https://sourceforge.net/p/brainfuck/discussion/201037/thread/ed364605/#378b/8235):

> David-  
> Actually, they're linefeed-terminated. Maybe you use OS X?  
> -Daniel.

Nobody/Anonymous at [2002-12-26 00:07 +0000](https://sourceforge.net/p/brainfuck/discussion/201037/thread/ed364605/#378b/2355):

> Well, the file that I md5-summed has $0D-terminated lines -- pasting it into the forum may have changed that.  
> -- David

Nobody/Anonymous at [2002-12-26 03:59 +0000](https://sourceforge.net/p/brainfuck/discussion/201037/thread/ed364605/#378b/1e84):

> Not talking about the forum, I'm saying that in order to get the md5 to match the one you posted before, the lines have to be terminated with $0A, not $0D, which means they were somehow $0A-terminated when you took the MD5--I don't know how it happened. Did you maybe FTP the file somewhere and it automatically used text mode?  
> -Daniel.

Nobody/Anonymous at [2002-12-28 16:36 +0000](https://sourceforge.net/p/brainfuck/discussion/201037/thread/ed364605/#378b/d0fa):

> David S.  
> 56 bytes  
> +>>+>,[>,]<[-[<-]<[>>[+[<+>-]>]<<[<]>-<<.->]<+>>+>>[>]<]  
> (which I md5sum'ed without the linefeed, to avoid that problem.)

Nobody/Anonymous at [2003-01-05 08:50 +0000](https://sourceforge.net/p/brainfuck/discussion/201037/thread/ed364605/#378b/d0fa/aac5):

> 51 bytes  
> Laurent Vogel  
> >>,[>+>,]<<[[-<<]>+[>]>[-<<[[->>+<<]<]>>>.[>]>]<<<]

Nobody/Anonymous at [2002-12-28 20:01 +0000](https://sourceforge.net/p/brainfuck/discussion/201037/thread/ed364605/#378b/eaa6):

> >>,[<<[[-<+>>>-[>]<<[->>+<<]>[<]<]<[->+>>+<<<]<]>>[>>],]<<[<<]>>[.>>] This would have been 6 bytes shorter if descending order would have been ok  Made By: NYYRIKKI 2002

Nobody/Anonymous at [2003-01-05 08:55 +0000](https://sourceforge.net/p/brainfuck/discussion/201037/thread/ed364605/#378b/2284):

> sort / version 2  
> "conservative" interpretation of the rules  
> Laurent Vogel  
> memory: entries consisting of ( a b x y )  
> x = 1 when the entry is done  
> y = 1 for all living entries  
> entries done which are on the far left are disposed of by  
> marking them y = 0; when no more entry exists whose y == 1 then  
> the progam stops  
> leave y = 0  
> >  
> read until EOF leaving 0 1 between chars read:  
> ,[>>>+>,]  
>   (a 0 0 1) _0  
> <  
> while y  
> [  
> [  
> <  
> skip entries whose x = 1  
> [<<<<]  
> set y = 0 and move to a  
> >- <<<  
>   _a  b  0  0  
> [->+>]  
>   _0  b  0  0   if a == 0  
>    a' b'_0  0   if a != 0  
> >  
>    0 _b  0  0   if a == 0  
>    a' b' 0 _0   if a != 0  
> [.>+>]  
>    0  b  1 _0   if a == 0   after having printed b  
>    a' b' 0 _0   if a != 0  
> restore y = 1  
> +  
> move to next entry  
> <<<<  
> loop back  
> ]  
> now y == 0  
> while x == 1 set y = 0  
> >>>[>->>>]>  
> while y move to next entry  
> [>>>>]  
> back to last entry whose y == 1 if any  
> <<<<  
> loop again except if no more valid entry  
> in latter case exit the loop and stop  
> ]
