t = int(input())
for i in range(t):
    n, k = [int(l) for l in input().split()]
    arr = [int(p) for p in input().split()]
    elem = min(arr)
    arr.remove(elem)

    counter = 0

    for j in range(len(arr)):
        counter = counter + (k - arr[j]) // elem
    print(counter)