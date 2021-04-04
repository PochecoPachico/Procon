n = int(input())

ans = 0
for i in range(1, 1000001):
    digit = 1
    tmp = i
    while (tmp):
        digit *= 10
        tmp //= 10

    num = i * digit + i

    if (num <= n):
        ans += 1
    else:
        break

print(ans)
