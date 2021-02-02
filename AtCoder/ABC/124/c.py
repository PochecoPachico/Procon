s = input()
l = len(s)

prev = 0
ans1 = 0
for i in s:
    if prev != int(i):
        ans1 += 1
    if prev == 1:
        prev = 0
    else:
        prev = 1


prev = 1
ans2 = 0
for i in s:
    if prev != int(i):
        ans2 += 1
    if prev == 1:
        prev = 0
    else:
        prev = 1

print(min(ans1, ans2))
