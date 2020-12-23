while True:
    a, b, c = map(int, input().split())
    lst = []
    lst.append(a)
    lst.append(b)
    lst.append(c)
    lst.sort()
    if a == 0 and b == 0 and c == 0:
        break
    if lst[0]**2 + lst[1]**2 == lst[2]**2:
        print("right")
    else:
        print("wrong")