o, e = input(), input()

ans =  ""
if len(o) == len(e):
    for c1, c2 in zip(o, e):
        ans += c1 + c2
else:
    for c1, c2 in zip(o[:-1], e):
        ans += c1 + c2
    ans += o[-1]

print(ans)
