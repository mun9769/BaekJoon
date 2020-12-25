N = 300
p = N
# arr = []
b = 0
for i in range(7,-1,-1):
    if int(N / 10**i) == 0:
        continue
    else : 
        b = 9*(i+1)
        break

semiresult = []

for i in range(b, 0, -1):
    semiresult.append(p - i)
print(semiresult)
result = []

for i in semiresult:
    k = i
    sum = 0
    while (i >0):
        Reminder = i % 10
        sum += Reminder
        i = i // 10
    if k + sum == p :
        result.append(k)
        print(k)
        break    

if len(result) == 0:
    print(0)