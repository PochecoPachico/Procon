y, m, d = tuple([int(e) for e in input().split('/')])

if y <= 2018 or (y == 2019 and m <= 3) or (y == 2019 and m == 4 and d <= 30):
    print('Heisei')
else:
    print('TBD')

