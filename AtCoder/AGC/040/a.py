s = input()
n = len(s) + 1

left, right = [0 for i in range(n)], [0 for i in range(n)]

for i, c in enumerate(s, 1):
    if c == '>':
        left[i] = 0
    else:
        left[i] = left[i - 1] + 1


for i, c in enumerate(s[::-1]):
    i = n - 2 - i
    if c == '<':
        right[i] = 0
    else:
        right[i] = right[i + 1] + 1

print(sum([max(l, r) for l, r in zip(left, right)]))
