for _ in range(int(input())):
    s, l, g = map(int, input().split())
    x = g//5
    if x > l:
        g = g-(l*5)
        if s >= g:
            print("true")
        else:
            print("false")
    else:
        g = g-(x*5)
        if s >= g:
            print("true")
        else:
            print("false")