n = int(input())
a = [int(i) for i in input().split(' ')]

if len(a) == len(set(a)):
    print('YES')
else:
    print('NO')
