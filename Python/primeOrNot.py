from math import sqrt
num=int(input("Enter a number\n"))

count=0
for i in range(2,10):
    if num % i==0:
        count+=1

if count<2:
    print("It is prime")
    num=round(sqrt(num),2)
    print(num)
else:
    print(0.00)    

