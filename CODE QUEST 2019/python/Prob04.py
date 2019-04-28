for _ in range(int(input())):
    n, s = input().split()
    n = int(n)
    if s == "true":
        n-=5
    if n <= 60:
        print("no ticket")
    elif n <= 80:
        print("small ticket")
    else:
        print("big ticket")