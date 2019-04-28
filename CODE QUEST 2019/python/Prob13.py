n = int(input())
for i in range(n):
    r, c, b = map(int, input().split())
    # print(r,c,b)
    arr = [[0 for x in range(c)] for y in range(r)]


    for j in range(b):
        x, y = map(int, input().split())
        j = 0
        k = 0
        arr[x][y] = "*"
        try: #  TL
            j = x-1
            k = y-1
            if j >= 0 and j < r and k >= 0 and k < c:
                arr[j][k] += 1
        except:
            pass
        try:
            j = x - 1
            k = y
            if j >= 0 and j < r and k >= 0 and k < c:
                arr[j][k] += 1
        except:
            pass
        try:
            j = x - 1
            k = y + 1
            if j >= 0 and j < r and k >= 0 and k < c:
                arr[j][k] += 1
        except:
            pass
        try:
            j = x
            k = y - 1
            if j >= 0 and j < r and k >= 0 and k < c:
                arr[j][k] += 1
        except:
            pass
        try:
            j = x
            k = y + 1
            if j >= 0 and j < r and k >= 0 and k < c:
                arr[j][k] += 1
        except:
            pass
        try:
            j = x + 1
            k = y - 1
            if j >= 0 and j < r and k >= 0 and k < c:
                arr[j][k] += 1
        except:
            pass
        try:
            j = x + 1
            k = y
            if j >= 0 and j < r and k >= 0 and k < c:
                arr[j][k] += 1
        except:
            pass
        try:
            j = x + 1
            k = y + 1
            if j >= 0 and j < r and k >= 0 and k < c:
                arr[j][k] += 1
        except:
            pass

    for row in arr:
        print("".join([str(x) for x in row]))