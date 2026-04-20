import bisect

def fxn():
    n, m = map(int, input().split(' '))
    a = list(map(int, input().split(' ')))
    b = list(map(int, input().split(' ')))
    a.sort()
    b.sort()
    
    while len(a) > 0 and len(b) > 0:
        temp = b.pop()
        element = a[-1]
        if element >= temp:
            pass
        else:
            bisect.insort(b, temp - element)
        
        if len(b) == 0:
            print("Alice")
            return
        
        temp = a.pop()
        element = b[-1]
        if element >= temp:
            pass
        else:
            bisect.insort(a, temp - element)
        
        if len(a) == 0:
            print("Bob")
            return
        
t: int = int(input())
while t > 0:
    t -= 1
    fxn()