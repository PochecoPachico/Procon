n = int(input())
h = [int(i) for i in input().split(' ')]

l, r = 0, 0
ans = 0
while l < n:
    tmp = 0
    r = l
    while r + 1 < n and h[r] >= h[r + 1]:
        r += 1
        tmp += 1
    ans = max(ans, tmp)
    l = r + 1

print(ans)
