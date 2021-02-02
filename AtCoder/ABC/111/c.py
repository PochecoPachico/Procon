from collections import Counter

n = int(input())

e = []
o = []
for i, v in enumerate(input().split(' ')):
    if i % 2 == 0:
        e.append(int(v))
    else:
        o.append(int(v))

if len(set(e + o)) == 1:
    print(int(len(e + o) / 2))
    exit()

if Counter(o).most_common()[0][0] == Counter(e).most_common()[0][0]:
    ans = min(len(o) - Counter(o).most_common()[1][1] + len(e) - Counter(e).most_common()[0][1], len(o) - Counter(o).most_common()[0][1] + len(e) - Counter(e).most_common()[1][1])
    print(ans)
else:
    print(len(o) - Counter(o).most_common()[0][1] + len(e) - Counter(e).most_common()[0][1])

