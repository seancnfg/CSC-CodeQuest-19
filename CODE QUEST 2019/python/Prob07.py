n = int(input())
for i in range(n):
    x = int(input())
    arr = []
    for j in range(x):
        arr.append(float(input()))
    low = min(arr)
    high = max(arr)

    for n in arr:
        out = (((n - low)/(high - low)) * 255)
        print(round(out))
