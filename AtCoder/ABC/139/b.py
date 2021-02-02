a, b = tuple([int(i) for i in input().split(' ')])
 
ans = 0
while True:
    if (a - 1) * (ans - 1) + a >= b:
        break
    if a == b:
        ans += 1
        break
    ans += 1
 
print(ans)
