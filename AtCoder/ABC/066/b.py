s = input()

for i in range(len(s)):
    s = s[:len(s) - 1]
    if len(s) % 2 == 1:
        continue

    half = int(len(s) / 2)

    if s[half:] == s[:half]:
        print(len(s))
        break
