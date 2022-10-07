
while(True):
    n = int(input('Enter number of steps    '))
    if n > 10 or n<=0:
        break
    a,b=1,1
    for i in range(n):
        a,b = b , a+b
    print(f'There are {a} ways to climb to the top')   