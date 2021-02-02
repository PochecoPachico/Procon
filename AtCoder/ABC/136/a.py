a, b, c = tuple([int(i) for i in input().split(' ')])
print(max([0, c - (a - b)]))
