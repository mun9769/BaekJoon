# import sys
# n = int(input())
# arr = list(map(int,input().split()))
n = 4
arr = [20,20,20,10]
maximum = arr[0]
minimum = arr[0]

for i in range(n-1):
    if arr[i] <= arr[i+1]:
        maximum = arr[i+1]
    else :
        minimum = arr[i+1]

print(minimum, maximum)