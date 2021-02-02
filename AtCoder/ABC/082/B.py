s = [i for i in input()]
t = [i for i in input()]

s.sort()

t.sort()
t.reverse()

if ''.join(s) < ''.join(t):
    print('Yes')
else:
    print('No')
