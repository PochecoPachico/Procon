def maxtime(x):
    return int(((x + 9) / 10)) * 10
ct = []

for _ in  range(5):
    ct.append(int(input()))

print(sum([maxtime(i) for i in ct]) - max([maxtime(i) -  i for i in ct]))
