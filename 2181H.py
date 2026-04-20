def GCD(a, b):
    if(a > b):
        a, b = b, a
    while b:
        a, b = b, a % b
    return a

w, h, d = map(int, input().split())
n = int(input())

if(w * h * d) % n != 0:
    print(-1)
else:
    g = GCD(w, n)
    print(g - 1, end=' ')
    n = int(n / g)
    g = GCD(h, n)
    print(g - 1, end=' ')
    n = int(n / g)
    g = GCD(d, n)
    print(g - 1)