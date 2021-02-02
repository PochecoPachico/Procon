h, w = tuple([int(i) for i in input().split(' ')])

a = []
for i in range(h):
    s = input()
    if s == '.' * w:
        h -= 1
        continue
    a.append(list(s))


d = []
for i in range(w):
    flg = True
    idx = -1
    for k in range(h):
        idx = i
        if a[k][i] == '#':
            flg = False
    if flg:
        d.append(idx)  

for i in range(h):
    for k in sorted(d, reverse=True):
        a[i].pop(k)


for i in range(h):
    print(''.join(a[i]))
