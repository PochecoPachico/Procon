n, m = tuple([int(i) for i in input().split(' ')])
p_y  = []
y = {i: [] for i in range(1, n + 1)}

for i in range(m):
    p_y.append(tuple([int(i) for i in input().split(' ')]))
    y[p_y[i][0]].append(p_y[i][1])

for k, v in y.items():
    v.sort()

for k, v in p_y:
    print(str(k).zfill(6) + str(y[k].index(v) + 1).zfill(6))
