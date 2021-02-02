s = input()
ans = 0
for i in range(int(len(s) / 2)):
    if s[i] != s[len(s) - i - 1]:
        ans += 1

print(ans)
