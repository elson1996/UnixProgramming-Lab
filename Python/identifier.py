import re
identifier = raw_input("Enter the Identifier: ")
regex = re.compile("^[A-Za-z|_]\w*$")
if regex.match(identifier):
    print "Valid Identifier"
else:
    print "Invalid Identifier"
