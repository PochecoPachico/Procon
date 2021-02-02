import math

n = int(input())

ans = 0
for i in range(1, n + 1):
    if math.floor(math.log10(i)) % 2 == 1:
        continue
    else:
        ans += 1

print(ans)
