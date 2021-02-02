def solve(h):
    if len(h) == 0:
        return 0
    if len(h) == 1:
        return h[0]
    if len(h) == 2:
        return max(h)

    mn = min(h)
    x = -1
    for i in range(len(h)):
        if h[i] == mn:
            x = i
        h[i] -= mn
    return mn + solve(h[:x]) + solve(h[x + 1:])

n = int(input())
h = [int(i) for i in input().split(' ')]

print(solve(h))
