sentance=input("Enter a sentence: ")
longest=max(sentance.split(),key=len)
print("Longest word is ",longest)
print("Length is ",len(longest))