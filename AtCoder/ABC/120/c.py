s = input()

r = s.count('0')
b = s.count('1')

print(2 * (r if r < b else b))
