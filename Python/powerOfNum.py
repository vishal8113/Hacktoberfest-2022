a = int(input('Enter num:\t'))
b = int(input('Enter power:\t'))

def pow(a,b):
    if b!= 0:
        return a * pow(a,b-1)
    else:
        return 1    

print(f'{a} to the power {b} is {pow(a,b)}')
