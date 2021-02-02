N = int(input())
A = [int(i) for i in input().split(' ')]
A.sort(reverse=True)
can = {}
for a in A:
    if a in can:
        can[a] += 1
    else:
        can[a] = 1

bar = []
for k, v in can.items():
    if v >= 2:
        bar.append(k)

if len(bar) <= 1:
    print(0)
else:
    print(bar[0] * bar[1])
