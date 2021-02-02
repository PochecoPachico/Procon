s = input()

d = {}
for c in s:
    if c not in d:
        d[c] = 1
    else:
        d[c] += 1

for k, v in d.items():
    if v != 2:
        print('No')
        exit()

if len(d) == 2:
    print("Yes")
else:
    print('No')
