s = input()
t = input()

ans = 0
for s_, t_ in zip(s, t):
    if s_ == t_:
        ans += 1

print(ans)
