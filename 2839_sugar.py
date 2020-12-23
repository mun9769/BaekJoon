N = 9
cnt = 0
for i in range(int(N/5),-1, -1):
    a = N - 5*i
    if a % 3 == 0:
        if a / 3 > 4:
            continue
        cnt += int(a/3)
        cnt += i
        print(cnt)
        break 

if cnt == 0:
    print(-1)