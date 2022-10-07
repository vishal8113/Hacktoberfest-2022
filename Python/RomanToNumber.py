d={"M":1000,"D":500,"C":100,"L":50,"X":10,"V":5,"I":1}  
l=[]
s=input('enter roman\n')
for i in s:
    l.append(d[i])

sum=0
print(l)        

for j in range(len(l)):
    print(sum)

    
    if(j==len(l) or l[j-1] >= l[j]):
        if(l[j-1]==l[j]):
            sum+=l[j]
        elif(l[j]>=l[j+1] and l[j+2]==l[j+1]):
            sum+=l[j]
        else:
            sum-=l[j]

    else:
        sum+=l[j]
           
                
print(sum)         