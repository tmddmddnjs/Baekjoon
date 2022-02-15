#4949
from pickletools import read_unicodestring1

def yes_no(stack):
    if len(stack) == 0:
        print("yes")
    else:
        print("no")

def solution(inputString):
    stack = []
    lastStackChar = ' '
    for idx in range(len(inputString)):
        if inputString[idx] == '.':
            yes_no(stack)
        if inputString[idx] == '(' or inputString[idx] == ')' or inputString[idx] == '[' or inputString[idx] == ']':
            if len(stack) == 0:
                stack.append(inputString[idx])
                lastStackChar = stack[-1]        
            else:
                if lastStackChar == '(' and inputString[idx] == ')' or\
                    lastStackChar == '[' and inputString[idx] == ']':
                    stack.pop()                              
                elif lastStackChar == '(' and inputString[idx] == '(' or inputString[idx] == '[':
                    stack.append(inputString[idx])
                elif lastStackChar == '[' and inputString[idx] == '(' or inputString[idx] == '[':
                    stack.append(inputString[idx])
                elif lastStackChar == '(' and inputString[idx] == ']' or\
                    lastStackChar == '[' and inputString[idx] == ')':
                    stack.append(inputString[idx])                    
                if len(stack) != 0:
                    lastStackChar = stack[-1]
                    if lastStackChar == ')' or lastStackChar == ']':
                        yes_no(stack)
                        break
        #( ) [ ]외의 모든 값은 무시
        else:
            continue
    
while True:
    inputString = input("")
    if inputString[0] == '.':
        exit()
    solution(inputString)