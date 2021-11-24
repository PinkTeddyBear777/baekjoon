Alpha=['A','B','C','D','E','F','G','H','I','J','K','L','M','N',
'O','P','Q','R','S','T','U','V','W','X','Y','Z']
alpha=['a','b','c','d','e','f','g','h','i','j','k','l','m','n',
'o','p','q','r','s','t','u','v','w','x','y','z']

check=[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0]

word=input()

for i in range(0,len(Alpha)):
    for j in range(0,len(word)):
        if Alpha[i]==word[j]:
            check[i]=check[i]+1
        elif alpha[i]==word[j]:
            check[i]=check[i]+1

max=check[0]
flag=0
count=0
for i in range(1,len(Alpha)):
    if check[i]>max:
        max=check[i]
        flag=i
        count=0
    elif check[i]==max:
        count=count+1

if count>0:
    print('?')
else:
    print(Alpha[flag])
