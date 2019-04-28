for _ in range(int(input())):
    s = input().replace("and", ",")
    arr = s.split(",")
    print(arr)
    ans = ["", "", ""]
    h = m = s = ""
    for x in arr:
        x = x.strip()
        if x != " ":
            this = ""
            end = x[-1]
            if end == "s":
                ans[2] = x[:-1]
            if end == "m":
                ans[1] = x[:-1]
            if end == "h":
                ans[0] = x[:-1]
        print(arr[0] + ":" + arr[1] + ":" + arr[2])