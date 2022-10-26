import sys

def words(inp):
    l=len(inp)
    
    if l <1 or l > 3:
        return 'Invalid'

    digits={1:'One',2:'Two',3:'Three',4:'Four',5:'Five',6:'Six',7:'Seven',8:'Eight',9:'Nine'}
    tenTotwenty={10:'Ten',11:'Eleven',12:'Twelve',13:'Thirteen',14:'Fourteen',15:'Fifteen',16:'Sizteen',17:'Seventeen',18:'Eighteen',19:'Nineteen',20:'Twenty'}

    tens={30:'Thirty',40:'Fourty',50:'Fifty',60:'Sixty',70:'Seventy',80:'Eighty',90:'Ninety',100:'Hundred'}

    if l < 2:
        return(digits[int(inp)])
    
    elif int(inp) >=10 and int(inp) <=20:
        return tenTotwenty[int(inp)]

    if l<3 :
        if inp[-1] == '0':
            return tens[int(inp)]
        else:
            n = int(inp)
            last=int(inp[-1])
            ten = n - last
            return tens[ten]+' '+digits[last]

    elif l>=3:
        if int(inp) == 100:
            return tens[int(inp)]
        else:
            last=int(inp[-1])
            n = int(inp[1:])
            ten = n - last
            f=int(inp[0])

            if ten in tens:
                ten=tens[ten]
            elif ten in tenTotwenty:
                ten=tenTotwenty[ten]    
            else:
                ten='And'       

            return digits[f]+' '+'Hundred'+' '+ten+' '+digits[last]    


while(1):
    inp=input('Enter a number between 0 and 999\t0.Exit\n')
    if inp == '0':
        sys.exit()
    else:
        print('\n')
        print(words(inp))
        print('\n')





