nums=[0,1,0,3,12]
c=0
for i in nums:
    if i==0:
        c+=1
        
nums.remove(0)
print(nums)
for i in range(c):
    nums.append(0)
print(nums) 