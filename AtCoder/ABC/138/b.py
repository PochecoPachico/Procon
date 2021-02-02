n = int(input())
a = [int(i) for i in input().split(' ')]

s = 0
for e in a:
    s += 1 / e

print(1 / s)
