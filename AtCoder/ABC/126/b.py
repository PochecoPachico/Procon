s = input()
a = int(s[0:2])
b = int(s[2:4])

if a >= 1 and a <= 12:
    # aがYYまたはMM
    if b >= 1 and b <= 12:
        print('AMBIGUOUS')
    else:
        print('MMYY')
else:
    # aがYY
    if b == 0 or b > 12:
        print('NA')
    else:
        print('YYMM')
