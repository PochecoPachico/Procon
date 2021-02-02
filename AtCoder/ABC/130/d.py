n, k = tuple([int(i) for i in input().split(' ')])
a = [0]

for i, j in enumerate([int(i) for i in input().split(' ')]):
    a.append(a[i] + j)

ans = 0
r = 0
for i in range(n + 1):
    for j in range(r, n + 1):
        if a[j] - a[i] >= k:
            ans += n - j + 1
            r = j
            break

print(ans)
