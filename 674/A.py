t = int(input())

for i in range(t):
    n, x = [int(j) for j in input().split()]
    floor = 0
    if ((n==1) or (n==2)):
        floor = 1
    else:
        floor = 2 + ((n-3)//x)
    print(floor)


