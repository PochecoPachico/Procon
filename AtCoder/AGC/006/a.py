n, s, t = int(input()), input(), input()


ans = 0
if s == t:
    ans = len(s)
else:
    ans = len(s) + len(t)
    max_len = 0
    for i in range(1, n + 1):
        if s[::-1][0:i][::-1] == t[0:i]:
            max_len = i
    ans -= max_len

print(ans)
