k, x = tuple([int(i) for i in input().split(' ')])

print(" ".join([str(i) for i in range(x - k + 1, x + k)]))
