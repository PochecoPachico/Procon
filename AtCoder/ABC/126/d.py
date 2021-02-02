class Edge:
    def __init__(self, u, v, w):
        self.u = u
        self.v = v
        self.w = w

n = int(input())
g = [[] for _ in range(n)]

for _ in range(n - 1):
    u, v, w_ = tuple([int(i) for i in input().split(' ')])
    u -= 1
    v -= 1
    g[u].append(Edge(v, u, w_))
    g[v].append(Edge(u, v, w_))

ans = [0 for _ in range(n)]

def dfs(i, p, c):
    ans[i] = c
    for en in g[i]:
        if en.u == p:
            continue
        if en.w % 2 == 0:
            dfs(en.u, i, c)
        else:
            dfs(en.u, i, c ^ 1)
import sys
sys.setrecursionlimit(10000)

dfs(0, -1, 0)

print('\n'.join([str(i) for i in ans]))
