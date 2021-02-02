n = int(input())
p = [int(e) for e in input().split(' ')]

tmp = sorted(p)

count = 0
for i in range(len(p)):
    if p[i] != tmp[i]:
        count += 1

if count == 2 or count == 0:
    print('YES')
else:
    print('NO')

