#9237
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
# print(managerComeCount + 2)
for idx in range(n):
    t[idx] += idx
print(max(t) + 2)

