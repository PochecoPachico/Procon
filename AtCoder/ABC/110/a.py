c = [int(i) for i in input().split(' ')]
c.sort(reverse=True)

print(int(str(c[0]) + str(c[1])) + c[2])

