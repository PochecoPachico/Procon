# coding: UTF-8

sx = int(input())
sy = int(input())
tx = int(input())
ty = int(input())

print("U" * abs(tx - sx) + "R" * abs(ty - sy))
print("D" * (abs(tx - sx)) + "L" * abs(ty - sy))
print("L" + "U" * ((abs(tx - sx)) + 1) + "R" * (abs(ty - sy) + 1))
print("R" + "D" * ((abs(tx - sx)) + 1) + "L" * (abs(ty - sy) + 1))
