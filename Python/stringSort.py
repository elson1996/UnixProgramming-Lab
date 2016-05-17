def sortString(word):
    return ''.join(sorted(word))
    
n = input("Enter number of strings: ")

strings = []
for i in range (n):
    word = raw_input("Enter string "+str(i)+": ")
    strings.append(word)
    
print "Sorted Strings:"
for word in strings:
    print sortString(word)
