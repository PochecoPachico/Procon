S = input()
a = [chr(i) for i in range(97, 97+26)]
for s in S:
    if s in a:
        a.remove(s)
if len(a) == 0:
    print('None')
else:
    print(a[0])
