#8958
inputCount = int(input(""))
for _ in range(inputCount):
    OX = input("")
    answer, count = 0, 1
    for idx in OX:
        if idx == 'X':
            count = 1
        elif idx == 'O':
            answer += count
            count += 1
    print(answer)
        
