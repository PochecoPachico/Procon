import sys

sys.setrecursionlimit(2000000)

s = input()

def solve(i):
    if i == 2:
        if s[i - 1] == s[i]:
            return 2
        else:
            return solve(i - 1) + 1
    if i == 1:
        if s[i - 1] == s[i]:
            return 1
        else:
            return 2
    if i == 0:
        return 1

    if s[i] != s[i - 1]:
        return solve(i - 1) + 1
    else:
        return solve(i - 3) + 2


print(solve(len(s) - 1))
