n = int(input())

dic = {}

for _ in range(n):
    s = input()
    if s not in dic:
        dic[s] = 1
    else:
        dic[s] += 1

m = int(input())

for _ in range(m):
    t = input()
    if t not in dic:
        dic[t] = -1
    else:
        dic[t] -= 1

print(max(max([v for _, v in dic.items()]), 0))

