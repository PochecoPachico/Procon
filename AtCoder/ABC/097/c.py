s = input()
K = int(input())

sub = set()
for i in range(1, K + 1):
    for k in range(len(s) - i + 1):
        sub.add(s[k:i + k])

print(sorted([i for i in sub])[K - 1])
