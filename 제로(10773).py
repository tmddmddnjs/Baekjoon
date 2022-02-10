k = int(input(""))
l = []
answer, num = 0, 0
for i in range(k):
    num = int(input(""))
    if num == 0:
        l.pop()
    else:
        l.append(num)

# print(sum(l))
for i in range(len(l)):
    answer += l[i]
print(answer)