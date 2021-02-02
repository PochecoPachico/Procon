n = int(input())
s = input()

m = 0
for i in range(1, n):
    sub1 = set(s[:i])
    sub2 = set(s[i:])
    count = 0
    for c in sub1:
        if c in sub2:
            count += 1
    if m < count:
        m = count


print(m)
