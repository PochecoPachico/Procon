s = input()

odd = ['R', 'U', 'D']
even = ['L', 'U', 'D']

for i, c in enumerate(s):
    if i & 1 == 0 and c not in odd:
        print('No')
        exit()
    if i & 1 == 1 and c not in even:
        print('No')
        exit()
print('Yes')
