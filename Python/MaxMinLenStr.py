string = 'I havI aaaa sasa good heart'

print(len(string))

print(max(string.split(), key=len))
print(min(string.split(),key=len))