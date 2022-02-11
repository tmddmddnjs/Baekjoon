#9012
from re import L
t = int(input(""))
temp = ' '
for loop in range(t):
    list = []
    s = input("")
    for idx in range(len(s)):
        if len(list) == 0:
            list.append(s[idx])
            temp = list[-1]
            #print(list)
        else:
            if temp == s[idx]:
                list.append(s[idx])
                #print(list)
            elif temp == '(' or s[idx] == ')':
                list.pop()
                #print(list)
            elif temp == ')' or s[idx] == '(':
                list.append(s[idx])
                #print(list)
            if len(list) != 0:
                temp = list[-1]
    if len(list) == 0:
        print("YES")
    else:
        print("NO")