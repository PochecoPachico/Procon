S_prime = input()
T = input()
ans = 'z'
matched = False

if len(S_prime) < len(T):
    print('UNRESTORABLE')
    exit()

for i in range(len(S_prime) - len(T) + 1):
    for k in range(len(T)):
        if S_prime[i + k] != T[k] and S_prime[i + k] != '?':
            break

    if k == len(T) - 1 and (S_prime[i + k] == T[k] or S_prime[i + k] == '?'):
        tmp = (S_prime[0:i] + T + S_prime[i + len(T):]).replace('?', 'a')
        if ans > tmp:
            ans = tmp
        matched = True

if matched:
    print(ans)
else:
    print('UNRESTORABLE')
