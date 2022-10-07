
strs = ["flower","flow","flight"]
per_word=[]
if not strs:
    print("")
else:     
    shortest = min(strs,key=len)
    print(shortest)
    for i in range(len(strs)-1):
        for j in range(len(shortest)):
            if(strs[i][j]==strs[i+1][j]):
                per_word.append(strs[i][j])
            elif (strs[i][j]!=strs[i+1][j] and len(strs)>1 ):
                per_word.remove(strs[i][j])    

            else:
                print("")    
                
                
print(shortest)
# tup=set(per_word)
print(per_word)            
