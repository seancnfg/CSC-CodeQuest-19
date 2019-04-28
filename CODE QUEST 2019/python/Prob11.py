n = int(input())
for _ in range(n):
    goal = int(input())

    for i in range(2 ** goal):
        b = str(bin(i))[2:]
        print("0" * (goal - len(b)) + b)