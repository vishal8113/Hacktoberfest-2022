# capStart=65
# smallStart=97

# for i in n:
#     print(chr(i),end=' ')

n=[65,66,67,68,115]
alpha=['a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z']
for i in range(len(n)):
    if n[i] >=65 and n[i]<98:
        dif=n[i]-65
        print(alpha[dif].upper())
    elif n[i]>97 and n[i] < 123:
        diff=n[i]-97
        print(alpha[diff])






        