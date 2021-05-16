from collections import deque

s = input()
ans = deque()

for c in s:
    if c == 'B':
        if len(ans) != 0:
            ans.pop()
        continue
    ans.append(c)

print(''.join(ans))
