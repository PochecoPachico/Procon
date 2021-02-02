n = int(input())

def dfs(s, n):
    if  int(s) > n:
        return 0
    ret = 0
    if all([c in s for c in '753']):
        ret = 1
    for c  in '753':
        ret += dfs(s + c, n)
    return ret 

print(dfs('0', n))
