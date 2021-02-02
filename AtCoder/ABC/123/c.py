import math

n = int(input())

times = []
for _ in range(5):
    times.append(int(input()))

print(times)
print(4 + (math.ceil(n % min(times))))
