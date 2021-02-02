n = int(input())

a = [int(i) for i in input().split()]
b = [int(i) for i in input().split()]

ans = 0
for i, e in enumerate(b):
    rem = e
    if e > a[i]:
        ans += a[i]
        rem = e - a[i]
    else:
        ans += e
        a[i] -= e
        continue

    if rem > a[i + 1]:
        ans += a[i + 1]
        a[i + 1] = 0
    else:
        ans += rem
        a[i + 1] -= rem

print(ans)
