s, t = input().split(' ')
a, b = tuple([int(i) for i in input().split(' ')])
u = input()
if s == u:
    print(a - 1, b)
elif t == u:
    print(a, b - 1)

