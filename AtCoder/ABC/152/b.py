a, b = tuple(int(i) for i in input().split(' '))

if b > a:
    print(str(a) * b)
else:
    print(str(b) * a)
