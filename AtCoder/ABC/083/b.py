n, a, b = map(int, input().split())

ans = 0

for i in range(1, n + 1):
    s = sum([int(c) for c in str(i)])
    if a <= s <= b:
        ans += i

print(ans)
