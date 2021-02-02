n = int(input())
ss = []

for _ in range(n):
    ss.append(input())

d = {}
m = 0

for s in ss:
    if s not in d:
        d[s] = 1
    else:
        d[s] += 1
    m = max(d[s], m)

ans = sorted([k for k, v in d.items() if v == m])

print('\n'.join(ans))


