lst = []
lst.append([0,0,0,0,0,0,0,0,0,0])
b = [0,1,1,1,1,1,1,1,1,1]
lst.append(b)
for i in range(99):
    lst.append([0,0,0,0,0,0,0,0,0,0])

# for i in lst:
#     print(i)

N = 9
result = 0
for i in range(2,N+1):
    for j in range(10):
        if j == 0:
            lst[i][j] = lst[i-1][j+1]
        elif j == 9:
            lst[i][j] = lst[i-1][j-1]
        else:
            lst[i][j] = lst[i-1][j-1] + lst[i-1][j+1]

for i in lst:
    print(i)

for j in range(10):
    result += lst[N][j]
print(result)