import sys
n = int(sys.stdin.readline())

result = []
for _ in range(n):
    a = int(sys.stdin.readline())
    if a != 0:
        result.append(a)
    else:
        result.pop()
sum = 0
for i in result:
    sum += i
print(sum)

N = 10
arr = [1,3,5,4,0,0,7,0,0,6]
for i in range(N):
    if arr[i] != 0:
        result.append(arr[i])
    else:
        result.pop()
sum = 0
for j in result:
    sum += j
print(sum)