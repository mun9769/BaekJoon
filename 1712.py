a,b,c = map(int,input().split())
n = 0

if b>=c:
    print(-1)
else :
    while True:
        n += 1
        if (-a + (c-b)*n )>0:
            break
    print(n)