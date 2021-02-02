s = input()

# 大文字チェック
count = 0
for c in s:
    if c.isupper():
        count += 1

if count != 2:
    print("WA")
    exit()

if s[0] != "A":
    print("WA")
    exit()

if s[2:len(s) - 1].count("C") != 1:
    print("WA")
    exit()

print("AC")
