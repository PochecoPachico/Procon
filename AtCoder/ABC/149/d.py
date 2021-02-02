n, k = ([int(i) for i in input().split(' ')])
r, s, p = ([int(i) for i in input().split(' ')])
t = list(input())

score = {'r': p, 's': r, 'p': s, 'l': 0}

ans = 0
for i in range(n):
    ans += score[t[i]]
    if i + k < n and t[i] == t[i + k]:
        t[i + k] = 'l'

print(ans)
    
