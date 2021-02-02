n =  int(input())

s = []
for _ in range(n):
    s.append(''.join(sorted(input())))

d = {}

for e in s:
    if e in d:
        d[e] += 1
    else:
        d[e] = 1

ans = 0
for k, v in d.items():
    ans += int(v * (v - 1) / 2)

print(ans)

