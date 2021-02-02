n = int(input())
b = {}
cities = []
for i in range(n):
    c, r = tuple([i for i in input().split(' ')])
    cities.append(c)
    if c in b:
        b[c].append((i + 1, int(r)))
    else:
        b[c] = [(i + 1, int(r))]

cities = list(set(cities))
cities.sort()
for c in cities:
    l = b[c]
    for i in sorted(l, key=lambda x: x[1], reverse=True):
        print(i[0])
