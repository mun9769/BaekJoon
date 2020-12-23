import itertools
import sys
# N, M = map(int, sys.stdin.readline().split())
# card = list(map(int,sys.stdin.readline().split()))

N = 10
M = 500
card = [93,181,245,214,315,36,185,138,216,295]
card.sort()
tmp = 0
for i in range(N-2):
    for j in range(i+1,N-1):
        for z in range(j+1,N):
            if card[i]+card[j]+card[z] > M:
                continue
            else :
                tmp = max(tmp,card[i]+card[j]+card[z])
print(tmp)