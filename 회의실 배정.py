#1931
N = int(input(""))
startTime, finishTime = 0, 0
#0으로 이루어진 2 * N의 2차원 배열
#arr = [[0]*2 for _ in range(N)]
arr = []
for idx in range(N):
    startTime, finishTime = map(int, input().split())
    arr.append([startTime, finishTime])
    arr[idx][0] = startTime
    arr[idx][1] = finishTime
#startTime을 기준으로 정렬
arr = sorted(arr, key=lambda a: a[0])
#finishTime을 기준으로 정렬
arr = sorted(arr, key=lambda a: a[1])
count = 0
temp = 0
for idx, jdx in arr:
    if idx >= temp:
        count += 1
        temp = jdx
print(count)
    

