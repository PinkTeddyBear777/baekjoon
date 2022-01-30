

inputNumber=list(input().split())
number=[]
for i in range(2):
    a=list(reversed(inputNumber[i]))
    number.append(a)

n1="".join(number[0])
n2="".join(number[1])    

if n1>n2:
    print(n1)
else:
    print(n2)