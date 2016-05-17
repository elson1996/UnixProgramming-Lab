def palindrome (word):
    if word == word[::-1]:
        return True
    return False
line = raw_input("Enter a line: ")
words = line.split()
for w in words:
    if palindrome(w):
        print w + " - palindrome"
    else:
        print w + " - not palindrome"
    
