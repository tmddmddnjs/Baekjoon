#10162
T = int(input(""))
timeButton = [300, 60, 10]
timeButtonCount = [0] * 3
answer, i = 0 ,0
if T % 10 != 0:
    print(-1)
else:
    while T != answer:
        answer += timeButton[i]
        timeButtonCount[i] += 1
        if answer > T:
            answer -= timeButton[i]
            timeButtonCount[i] -= 1
            i += 1
    print(f'{timeButtonCount[0]} {timeButtonCount[1]} {timeButtonCount[2]}')