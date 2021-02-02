n = list(map(int, list(input())))

ans = 0
for i, e in enumerate(n):
    if i == 0:
        ans += n[i]
        continue

    if n[i] != 9:
        ans = ans - 1 + 9 * (len(n) - i)
        break

    ans += 9

print(ans)

