#11399
N = int(input())
P = list(map(int, input().split()))
P.sort()
S = 0
# for idx in range(1, N+1):
#     S += sum(P[:idx])
for idx in range(1, N+1):
    for jdx in range(idx):
        S += P[jdx]
print(S)


