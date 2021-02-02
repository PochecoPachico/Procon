a, b = input().split()
concat = int(a + b)

i = 1
while True:
    if i * i == concat:
        print("Yes")
        exit()
    i += 1
    if i * i > concat:
        break

print("No")
