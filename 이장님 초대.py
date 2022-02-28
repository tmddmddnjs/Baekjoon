#9237
from re import I, T


n = int(input())
t = list(map(int, input().split()))
t.sort(reverse=True)
# 시간초과
# managerComeCount = n
# for idx in range(n):t[idx] -= (n-idx)
# while True:
#     t = [n-1 for n in t]
#     managerComeCount += 1
#     if max(t) == 0:
#         break
for idx in range(n):
    t[idx] += idx
print(max(t) + 2)

