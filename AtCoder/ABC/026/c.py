n = int(input())
b = []
for i in range(n - 1):
    b.append(int(input()))
    

s = [[] for _ in range(n + 1)]
for i, v in enumerate(b[::-1]):
    idx = n - i
    if len(s[idx]) == 0:
        salary = 1
    else:
        salary = max(s[idx]) + min(s[idx]) + 1
    s[v].append(salary)

print(max(s[1]) + min(s[1]) + 1)
