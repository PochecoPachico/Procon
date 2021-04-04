x = input()
i = x.find('.')
if i == -1:
    print(x)
else:
    print(x[:i])
