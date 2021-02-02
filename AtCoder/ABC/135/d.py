MOD = 1000000007
s = input()
n = len(s)

dp = [[0 for _ in range(14)] for _ in range(n + 1)]

print(dp)
dp[0][0] = 1
print(dp)
for i, c in enumerate(s):
    for k in range(13):
        if c == '?':
            for l in range(10):
                dp[i + 1][(k * 10 + l) % 13] += dp[i][k]
        else:
            dp[i + 1][(k * 10 + int(c)) % 13] += dp[i][k]

    for k in range(13):
        dp[i + 1][k] %= MOD

print(dp[n][5])

