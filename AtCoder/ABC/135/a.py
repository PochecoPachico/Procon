a, b = tuple([int(e) for e in input().split(' ')])

if (a + b) % 2 != 0:
    print('IMPOSSIBLE')
else:
    k = int((a + b) / 2)
    if abs(a - k) == abs(b - k):
        print(k)
    else:
        print(-1 * k)
