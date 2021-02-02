a, b, c, d = tuple([int(i) for i in input()])

if a + b + c + d == 7:
    print(f"{a}+{b}+{c}+{d}=7");
elif a + b + c - d == 7:
    print(f"{a}+{b}+{c}-{d}=7");
elif a + b - c + d == 7: 
    print(f"{a}+{b}-{c}+{d}=7");
elif a + b - c - d == 7:
    print(f"{a}+{b}-{c}-{d}=7");
elif a - b + c + d == 7:
    print(f"{a}-{b}+{c}+{d}=7");
elif a - b + c - d == 7:
    print(f"{a}-{b}+{c}-{d}=7");
elif a - b - c + d == 7:
    print(f"{a}-{b}-{c}+{d}=7");
elif a - b - c - d == 7:
    print(f"{a}-{b}-{c}-{d}=7");

