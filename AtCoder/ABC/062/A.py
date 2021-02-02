A = [1, 3, 5, 7, 8, 10, 12]
B = [4, 6, 9, 11]
C = [2]

li = input().split()
x = int(li[0])
y = int(li[1])

if (x in A and y in A) or (x in B and y in B) or (x in C and y in C):
    print('Yes')
else:
    print('No')
