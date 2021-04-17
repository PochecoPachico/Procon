n = int(input())

ans = 0
for i in range(1, n):
    c = str(i)
    if int(c + c) <= n:
        ans += 1
    else:
        break

print(ans)

