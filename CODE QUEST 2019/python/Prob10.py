for _ in range(int(input())):
    n = int(input()) % 26
    s = input()
    ans = ""

    for x in s:
        if x == " ":
            ans += " "
        else:
            #print("x", x)
            temp = ord(x) - n
            #print("value is", ord(x))
            #print("value is now", temp)
            if temp < ord("a"):
                ans += chr(temp + 26)
            else:
                ans += chr(temp)
    print(ans)