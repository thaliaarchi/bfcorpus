import math, statistics, time, sys

if len(sys.argv) > 1:
    inp = open(sys.argv[1], "rb").read()
else:
    inp = input().encode("utf8")

base = list(bytearray(inp))


# Generate hashmap
tim = time.time()

def multiply(val: int) -> tuple[int, int, int]:
    calc = math.floor(math.sqrt(val))
    offset = val - calc*calc

    if offset % calc != calc:
        calc2 = calc + offset // calc
        offset %= calc
    else:
        calc2 = calc

    return (offset, calc, calc2)

def genhmap() -> dict[int, str]:
    hmap = {}
    for val in range(-256,256):
        if val > 0:
            raw = f">{'+'*val}>"
            offset, calc1, calc2 = multiply(val)
            mult = f"{'+'*calc1}[>{'+'*calc2}<-]>{offset*'+'}>"
            if len(raw) > len(mult): hmap[val] = mult
            else: hmap[val] = raw

        elif val < 0:
            raw = f">{'-'*abs(val)}>"
            offset, calc1, calc2 = multiply(abs(val))
            mult = f"{'+'*calc1}[>{'-'*calc2}<-]>{offset*'-'}>"
            if len(raw) > len(mult): hmap[val] = mult
            else: hmap[val] = raw

        elif val == 0:
            hmap[val] = ">>"

    return hmap


hmap = genhmap()
# Gen start location
base_pairs = int(round(statistics.mean(base)))
bf = [hmap[base_pairs][:-1], f"[-{'>>+'*len(base)}{'<<'*len(base)}]>"]

# Compile
for i in base[::-1]:
    val = i - base_pairs
    bf.append(hmap[val])
bf[-1] = bf[-1][:-1]
bf.append(f"[.<<]")

print("".join(bf))
print(time.time()-tim, file=sys.stderr)
