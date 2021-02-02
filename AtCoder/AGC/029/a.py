s = input()

ans, w_cnt = 0, 0
for i, c in enumerate(s):
    if c == 'W':
        ans += i - w_cnt
        w_cnt += 1

print(ans)
