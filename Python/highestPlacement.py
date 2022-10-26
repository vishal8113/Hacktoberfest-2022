d={'CSE':0,'ISE':0,'MECH':0}

d['CSE']=int(input('CSE: '))
d['ISE']=int(input('ISE: '))
d['MECH']=int(input('MECH: '))

print(d) 
m=max(d.values())
# print('Max value =',m)

for key,value in d.items():
    if value < 0:
        print('Invalid')
        break
    
    elif m==0:
        print('None of them has placed')
        break

    elif value==m:
        print(key)

            