n, q = tuple(int(i) for i  in input().split(' '))
s = input()

c = [0] * (n + 1)

for i in range(n):
    c[i + 1] = c[i] + (1 if s[i:i + 2] == 'AC' else 0)

for i in range(q):
    l, r = tuple(int(i) for i  in input().split(' '))
    print(c[r - 1] - c[l - 1])
