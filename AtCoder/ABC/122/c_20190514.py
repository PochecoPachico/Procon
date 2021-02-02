n, q = tuple([int(i) for i in input().split(' ')])
s = input()

c = [0] * n

# 累積和計算
for i in range(1, n):
    if s[i - 1:i + 1] == 'AC':
        c[i] += c[i - 1] + 1
    else:
        c[i] += c[i - 1]

for i in range(q):
    l, r = tuple([int(i) for i in input().split(' ')])
    print(c[r - 1] - c[l - 1])
