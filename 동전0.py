#11047
N, K = map(int, input().split())
money = []
for idx in range(N):
    money.append(int(input()))
money.reverse()
i = 0
count = 0
while K != 0:
    count += K//money[i]
    K %= money[i]
    i += 1
# N, K = input().split()
# N = int(N)
# K = int(K)
## money = [int(input()) for _ in range(N)]
# money.reverse()
# idx, tempMoney, count = 0, 0, 0
# while K != tempMoney:
#     if K < money[idx]:
#         idx += 1
#     elif tempMoney <= K:
#         tempMoney += money[idx]
#         count += 1
#     elif tempMoney > K:
#         tempMoney -= money[idx]
#         idx += 1
#         count -= 1
print(count)
