n = int(input())
s, t = tuple(input().split(' '))

for a, b in zip(s, t):
    print(a + b, end='')
print()
