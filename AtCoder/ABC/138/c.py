n = int(input())
v = sorted([int(i) for i in input().split(' ')])

ans = (v[0] + v[1]) / 2
for e in v[2:]:
    ans = (ans + e) / 2

print(ans)





