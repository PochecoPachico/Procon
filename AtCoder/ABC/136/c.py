n = int(input())
h = [int(i) for i in input().split(' ')]

def dfs(i, o, prev):
    if i == n:
        return True
    f = False
    if h[i] >= h[i - 1] + prev:
        f = dfs(i + 1, 0, 0) or dfs(i + 1, -1, 0) or f
    if h[i] + o >= h[i - 1] + prev:
        f = dfs(i + 1, 0, -1) or dfs(i + 1, -1, -1) or f
    return f
if h[1] - h[0] >= 0:
    print(dfs(1, 0, 0) or dfs(1, -1, 0))
else:
    print(dfs(1, 0, 0) or dfs(1, -1, 0))
