n = 3
m = 1
arr = []
isused = []
for i in range(m):
    arr.append(0)
for i in range(n):
    isused.append(0)

def func(k):
    if k == m:
        for i in range(m):
            print(arr[i],end=" ")
        print()
        return
    
    for i in range(n) :
        if isused[i] == 0:
            
            arr[k] = i + 1
            isused[i] = 1
            func(k+1)
            isused[i] = 0

func(0)