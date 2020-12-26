N = 5
arr = [3,1,4,3,2]

arr.sort()
sum = 0
for i in range(N-1,-1,-1):
    for j in range(i+1):
       sum += arr[j] 

print(sum)