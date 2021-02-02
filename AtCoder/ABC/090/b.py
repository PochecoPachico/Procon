a, b = map(int, input().split())

ans = 0
for i in range(a, b + 1):
    i_s = str(i)
    if i_s[-1] == i_s[0] and i_s[-2] == i_s[1]:
        ans += 1

print(ans)
