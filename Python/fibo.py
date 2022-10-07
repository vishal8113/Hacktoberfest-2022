
val=6
n1 = 0
n2 =1

if val<0:
    print('Incorrect')

else:
    print(n1,n2,end = ' ')   
    for x in range(2,val):
        next = n1 + n2
        print(next,end=' ')
        n1=n2
        n2= next 

       
