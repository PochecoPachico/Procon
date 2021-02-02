def f(n):
    if n % 2 == 0:
        return n / 2
    else:
        return 3 * n + 1

s = int(input())
st = set([s])

ans = -1
for i in range(2, 1000001):
    s = int(f(s))
    if s in st:
        ans = i
        break
    st.add(s)

print(ans)
