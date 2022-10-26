n=[2,1,0,-8,-9]
pos,nut,neg=0,0,0

for i in n:
    if i >0:
        pos+=1
    elif i<0:
        neg+=1
    else:
        nut+=1
l=len(n)
neg/=l
nut/=l
pos/=l
print(neg,',',nut,',',pos)                