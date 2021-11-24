alpha=['a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z']
S=input()
count=[-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1]
for i in range(0,len(alpha)):
    for j in range(0,len(S)):
        if alpha[i]==S[j]:
            if(count[i]==-1):
                count[i]=j

for i in range(0,len(count)):
    print(str(count[i]),end=' ')