nums = [1,3,5,6]
target = 2
if target in nums:
    print (nums.index(target))
else:
    for c in range(len(nums)):
        for h in nums:
            print(h) 
            if target > h:
                tr=nums.index(h) + 1
                break
             

    print(tr)                                