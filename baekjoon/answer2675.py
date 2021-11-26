T=int(input())

for i in range(0,T):
    str=list(input().split())
    R=int(str[0])
    S=str[1]

    a=[]
    for j in range(0,len(S)):
        a.append(S[j])
    
    output=""
    for k in range(0,len(S)):
        for r in range(0,R):
            output=output+a[k]
        
    print(output)    