h, w, x, y = map(int, input().split())
x -= 1
y -= 1
s = []
for i in range(h):
    s.append(input())

ans = 1
idx = y - 1
while idx >= 0 and s[x][idx] != '#':
    idx -= 1
    ans += 1

idx = y + 1
while idx < w and s[x][idx] != '#':
    idx += 1
    ans += 1

idx = x - 1
while idx >= 0 and s[idx][y] != '#':
    idx -= 1
    ans += 1

idx = x + 1
while idx < h and s[idx][y] != '#':
    idx += 1
    ans += 1

print(ans)
