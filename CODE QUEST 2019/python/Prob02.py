n = int(input())
for _ in range(n):
    a, b = map(int, input().split())
    if a == b:
        print((a+b)*2)
    else:
        print(a+b)