S = input()
T = input()

if S == T:
    print('Yes')
    exit()

for i in range(len(S) - 1):
    S = S[len(S) - 1] + S[:len(S) - 1]
    if S == T:
        print('Yes')
        exit()

print('No')
