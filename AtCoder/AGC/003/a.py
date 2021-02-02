s = input()

if s.count("N") > 0:
    if s.count("S") == 0:
        print("No")
        exit()

if s.count("S") > 0:
    if s.count("N") == 0:
        print("No")
        exit()

if s.count("W") > 0:
    if s.count("E") == 0:
        print("No")
        exit()

if s.count("E") > 0:
    if s.count("W") == 0:
        print("No")
        exit()

print("Yes")
