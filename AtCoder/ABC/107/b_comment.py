h, w = tuple([int(i) for i in input().split(' ')])

a = []
for i in range(h):
    s = input()
    if s == '.' * w:
        h -= 1
        continue
    a.append(list(s))

flg = [False for _ in range(w)]
for i in range(h):
    for k in range(w):
        if a[i][k] == '#':
            flg[k] = True


for i in range(h):
    for k in range(w):
        if flg[k]:
            print(a[i][k], end='')
    print()

