# min,max = map(int,input().splite())
min = int(1)
max = int(200)
cnt = int(0)

idx = int(1)

while idx**2 < max:
    cnt += 1
    idx += 1
idx = int(1)
while idx**2 < min:
    cnt -= 1
    idx += 1
print(cnt)