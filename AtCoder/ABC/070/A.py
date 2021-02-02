N = input()

for i in range(int(len(N) / 2 + 1)):
    if N[i] != N[len(N) - 1 - i]:
        print('No')
        exit()

print('Yes')
