n = int(input())
h = [int(i) for i in input().split(' ')]

for i, e in enumerate(h[-2::-1]):
    if h[len(h) - i - 1] - e == -1:
        h[len(h) - i - 2] -= 1
    elif h[len(h) - i - 1] - e < -1:
        print('No')
        exit(0)

print('Yes')

