import math
n = int(input())
for i in range(n):
    x = int(input())
    out = (40075/(2 * math.pi)+x) * (math.pi * 2)
    print(round(out, 1))
