n, m = tuple([int(i) for i in input().split(' ')])

a = [0 for _ in range(n + 2)]
dp = [0 for _ in range(n + 2)]

for i in range(m):
    a[int(input())] = 1

dp[0] = 1
for i in range(n):
    if a[i + 1] != 1:
        dp[i + 1] += dp[i]

    dp[i + 1] %= 1000000007
    if a[i + 2] != 1:
        dp[i + 2] += dp[i]

    dp[i + 2] %= 1000000007

print(dp[n])
