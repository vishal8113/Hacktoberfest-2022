s=input('Enter a string')

# for i in range(0,len(s)-1,2):
#     r=int(s[i+1])
#     for j in range(r):
#         print(s[i],end='')

for i in range(0,len(s)-1,2):
    if s[i].isalpha():
        print(s[i] * int(s[i+1]),end='')