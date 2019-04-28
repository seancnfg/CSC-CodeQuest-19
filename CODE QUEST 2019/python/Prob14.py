for _ in range(int(input())):
    d = {}
    temp = {}
    n = int(input())
    for __ in range(n):
        k, v = input().split()
        d[k] = v
        temp[v] = k
    print(d)
    print(temp)
    starting = ""
    for x in d.values():
        if x not in d.keys():
            starting = x
            break
    print(starting)
    for ___ in range(n-1):
        starting = v[starting]
        print(starting)