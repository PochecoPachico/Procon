n, k = tuple([int(i) for i in input().split(' ')])
s = input()

rl = s.count('RL')
t = 0
if s[0] == 'R':
    t += 1
if s[-1] == 'L':
    t += 1

ans = 0
if k <= rl:
    ans += rl * 2
    k -= rl

elif k > rl:
    ans += k * 2
    print(ans)
    return
