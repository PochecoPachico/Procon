n, q = tuple([int(i) for i in input().split(' ')])

g = [[] for _ in range(n + 1)]
c = [0 for _ in range(n + 1)]

for i in range(1, n):
    a, b = tuple([int(i) for i in input().split(' ')])
    g[a].append(b)
    g[b].append(a)

def solve(i, p):
    c[i] += c[p]
    for e in g[i]:
        if e == p:
            continue
        else:
            solve(e, i)

for i in range(q):
    p, x = tuple([int(i) for i in input().split(' ')])
    c[p] += x

import sys
sys.setrecursionlimit(200000)

solve(1, 0)

print(' '.join([str(i) for i in c[1:]]))
