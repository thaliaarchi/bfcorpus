# [Contest #2 live comments](https://sourceforge.net/p/brainfuck/discussion/201037/thread/1d2c5457/)

Nobody/Anonymous at [2002-12-10 01:17 +0000](https://sourceforge.net/p/brainfuck/discussion/201037/thread/1d2c5457/#2516):

> I thought, that commenting is always a nice thing, so I hope, that no one is offenced by this subject.  
> If I'm correct Daniel wrote a 53 byte entry, that was against the rule "Incrementing 255 or decrementing 0 results in a fatal error" It was anyway a very nice start for this "race".  
> (Also special thanx to Daniel for pointing me last week to this great contest page!)  
> David S. wrote a 91 byte entry, that sounds like a very nicely optimized BF version of the most well known simple sort algorithm. :-)  
> My tip of the day: Forget about programing on other languages, forget about basic algorithms you know, brainfuck your self and make a winning entry!  
> ~NYYRIKKI

Nobody/Anonymous at [2002-12-10 02:13 +0000](https://sourceforge.net/p/brainfuck/discussion/201037/thread/1d2c5457/#2516/eedc):

> -I'm not offended. But I don't know how many people are going to feel inclined to talk about their algorithms during the contest :)  
> -Actually it was David Greenspan, not me, who reported a 53-byte solution, and he didn't answer Bertram about whether it broke any rules, so we don't know that yet.  
> -Daniel.

Nobody/Anonymous at [2002-12-11 14:02 +0000](https://sourceforge.net/p/brainfuck/discussion/201037/thread/1d2c5457/#2516/acaf):

> Oops, sorry about my mistake.  
> ~NYYRIKKI

Nobody/Anonymous at [2002-12-11 16:46 +0000](https://sourceforge.net/p/brainfuck/discussion/201037/thread/1d2c5457/#2516/44fb):

> No problem.  
> -Daniel.

Nobody/Anonymous at [2002-12-15 02:02 +0000](https://sourceforge.net/p/brainfuck/discussion/201037/thread/1d2c5457/#2516/68bf):

> About my 91-byte entry--my first instinct was that it was the simplest way to do it, but I guess I need to learn to consider different solutions instead of latching on to my first idea.  If I can carry that lesson into the real world, maybe some good will come out of this thing that I'm obsessively wasting time on.  
> On the other hand, that was an O(n) algorithm, and I don't think I can duplicate that feat with a shorter program.  In real life my first instinct would have been the correct trade-off of size for time.  
> -- David S.

Nobody/Anonymous at [2002-12-15 19:32 +0000](https://sourceforge.net/p/brainfuck/discussion/201037/thread/1d2c5457/#2516/56ce):

> Hm, cool. I'll be very interested to see it. I didn't know it was possible to get O(n) in brainfuck for arbitrary n.  
> -Daniel.

Nobody/Anonymous at [2002-12-16 00:20 +0000](https://sourceforge.net/p/brainfuck/discussion/201037/thread/1d2c5457/#2516/49cf):

> Okay, here it is, since it's not going to win anyway :(  
> >>>>>,[>+>>>>,]>>>>>+[<+<[>]>>[<++>-]<]<<[<<<[<[<<+>>-[<]]<<[.[-]]<[>]<]>>>[>]>>[>>>>>]<<-]  
> It loops through 255 times, decrements and outputs if 0 and if it hasn't already been output.  
> But it's too hard to keep track of whether a thing's been output already in addition to checking for the end of the list, so I ended up spreading out the numbers too much.  
> Also I needed the constant 255, and I forget how much constants use up space (even though I came up with a way to calculate it that saved a few bytes over the obvious multiplication method).  
> I'm at 56 bytes now using a slightly different approach, but I won't bother to post that yet.  
> David S.

Nobody/Anonymous at [2002-12-16 02:52 +0000](https://sourceforge.net/p/brainfuck/discussion/201037/thread/1d2c5457/#2516/f1fc):

> Hey, yeah. That's great. I should have thought of that. Damn.  
> Two little bugs: a < needs moving from about spot 44 to 88, and then it still won't handle null input--if people feel that that shouldn't matter, we could vote to take it out of the requirements--but these are minor and it's not your final submission anyway. Very interesting program.  
> -Daniel.

Nobody/Anonymous at [2002-12-16 05:17 +0000](https://sourceforge.net/p/brainfuck/discussion/201037/thread/1d2c5457/#2516/835f):

> Just posted my original 53 byte entry. It seems to follow all the rules. I haven't improved on it yet.  
> -- David G.

Nobody/Anonymous at [2002-12-24 08:34 +0000](https://sourceforge.net/p/brainfuck/discussion/201037/thread/1d2c5457/#2516/8bf1):

> Okay now.  
> -My entry uses 2n+3 cells.  
> -The termination is mildly anomalous but perfectly safe.  
> -No real guess as to whether 50 is optimal.  
> -Thanks and congratulations to all participants.  
> -Comments and discussion? Where is everyone? :)  
> -Daniel.

Nobody/Anonymous at [2002-12-24 11:39 +0000](https://sourceforge.net/p/brainfuck/discussion/201037/thread/1d2c5457/#2516/e857):

> Hmm, our two entries are identical (I'll post the URL in a moment). This could mean they're locally optimal in some sense ... don't know about other approaches. I have a 51 bytes entry which uses roughly half the amount of memory (at home, it'll eventually make it to the collection of files which I call my website)  
> Comments: I liked the contest, and I'm was a bit surprised about how small the entries got.  
> Personally, I'm with my family. Christmas time, you know :)  
> -Bertram

Nobody/Anonymous at [2002-12-24 18:44 +0000](https://sourceforge.net/p/brainfuck/discussion/201037/thread/1d2c5457/#2516/1792):

> Good contest. Now we know that there is a 50-byte sort program. I guess we'll never know for sure how short a program exists to do the task.  
> Brainfuck source is remarkably compact, especially when you consider that it only needs 3-bit characters.  
> Should we start a thread for ideas for the next contest?  
> -- David

Nobody/Anonymous at [2002-12-24 22:04 +0000](https://sourceforge.net/p/brainfuck/discussion/201037/thread/1d2c5457/#2516/db7d):

> Sure. The old ideas still on the table are at:  
> http://www.seedwiki.com/page.cfm?doc=golfideas&wikiid=794&wpid=  
> and we can think of others also.  
> I agree about the compactness, but naturally it depends on the use made of the language...  
> -Daniel.

Nobody/Anonymous at [2002-12-24 23:46 +0000](https://sourceforge.net/p/brainfuck/discussion/201037/thread/1d2c5457/#2516/1af9):

> Sure. The old ideas still on the table are at:  
> http://www.seedwiki.com/page.cfm?doc=golfideas&wikiid=794&wpid=  
> and we can think of others also.  
> I agree about the compactness, but naturally it depends on the use made of the language...  
> -Daniel.

Nobody/Anonymous at [2002-12-28 03:43 +0000](https://sourceforge.net/p/brainfuck/discussion/201037/thread/1d2c5457/#2516/8085):

> Wonder when the other three are going to turn in their source?  
> -Daniel.

Nobody/Anonymous at [2002-12-28 20:05 +0000](https://sourceforge.net/p/brainfuck/discussion/201037/thread/1d2c5457/#2516/c354):

> Too bad, that I had no much time as X-mas was coming, but at least I made a shortest bubble sort algorithm. :-)  
> ~NYYRIKKI

Nobody/Anonymous at [2002-12-28 22:49 +0000](https://sourceforge.net/p/brainfuck/discussion/201037/thread/1d2c5457/#2516/aca2):

> Ah yes, Shortest Program With the Wrong Algorithm, the same prize I got last time :)  
> -Daniel.

Nobody/Anonymous at [2003-01-05 08:53 +0000](https://sourceforge.net/p/brainfuck/discussion/201037/thread/1d2c5457/#2516/dba8):

> sorry to have been a little late posting my source, I've just come back from a two weeks holiday.  
> Laurent Vogel

Nobody/Anonymous at [2003-01-05 15:59 +0000](https://sourceforge.net/p/brainfuck/discussion/201037/thread/1d2c5457/#2516/cb46):

> Hey, cool. I should have spotted that path, but didn't.  
> Looks like it uses 2n+4 memory cells for n>=1, whereas David Greenspan's uses 2n+3 for n>=0...is that right?  
> Also, I haven't quite got the md5s to work yet. Any more information about the file?  
> (By the way, I haven't had any brilliant ideas for the next contest.)  
> -Daniel.

Nobody/Anonymous at [2003-01-06 07:01 +0000](https://sourceforge.net/p/brainfuck/discussion/201037/thread/1d2c5457/#2516/cb46/d5d6):

> The md5 sum was taken on a file with two ending newlines.  
> (This is silly!)  
> Anyway, here is an hexadecimal dump of the file.  
> The '*' in the rightmost column indicate newlines (ascii 0x0a).  
> 000  3531 2062 7974 6573 0a4c 6175 7265 6e74  51 bytes*Laurent   
> 010  2056 6f67 656c 0a3e 3e2c 5b3e 2b3e 2c5d   Vogel*>>,[>+>,]   
> 020  3c3c 5b5b 2d3c 3c5d 3e2b 5b3e 5d3e 5b2d  <<[[-<<]>+[>]>[-   
> 030  3c3c 5b5b 2d3e 3e2b 3c3c 5d3c 5d3e 3e3e  <<[[->>+<<]<]>>>   
> 040  2e5b 3e5d 3e5d 3c3c 3c5d 0a0a            .[>]>]<<<]**

Bertram Felgenhauer at [2003-01-05 19:49 +0000](https://sourceforge.net/p/brainfuck/discussion/201037/thread/1d2c5457/#2516/9534):

> Yup, that's very nice indeed.  
> I couldn't get the MD5 sum correct either though.  
> Btw, my 51 bytes program which uses n+O(1) memory (n+4, I think) can now be found in  
> http://www.inf.tu-dresden.de/~bf3/bfgolf/2/scratch.b  
> For the next context, I still believe rot13 is a rather neat idea.  
> Or maybe a program which prints the n-th fibonacci number, where n is the ascii code of the first character of input and output is in decimal.  
> -Bertram

Nobody/Anonymous at [2003-01-07 01:31 +0000](https://sourceforge.net/p/brainfuck/discussion/201037/thread/1d2c5457/#2516/2293):

> A hex dump of my file shows that lines end with 0x0D. However, I have discovered that the md5 program reads 0x0D as 0x0A and 0x0A as 0x0D. There is nothing in the source that does this, so it may be part of the machinery of C++ streams on Mac OS 9. That would seem pretty strange though.  
> -- David G.

Nobody/Anonymous at [2003-01-07 11:37 +0000](https://sourceforge.net/p/brainfuck/discussion/201037/thread/1d2c5457/#2516/2293/6440):

> > However, I have discovered that the md5 program   
> > reads 0x0D as 0x0A and 0x0A as 0x0D.  
> it may be because the file is opened in text mode  
> instead of binary mode. Mac text files have lines   
> ending with 0x0D so it may be that, instead of  
> simply deciding '\n' == 0x0D and '\r' == 0x0A your  
> compiler swaps 0x0D and 0x0A when files are   
> opened in non-binary mode.  
> Laurent
