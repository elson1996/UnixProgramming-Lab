print "ZeroDivisionError dividing 10/0"
try:
    x = 10/0
except ZeroDivisionError:
    print "ZeroDivisonError raised"
    
print "\nIndexError accessing array index out of range"
try:
    x = ['a','b']
    print x[4]
except IndexError:
    print "IndexError raised"

print "\nUser Defined Exception"
class MyError(Exception):
    def __init__(self, value):
        self.value = value
    def __str__(self):
        return self.value

try:
    raise MyError(2*2)
except MyError as e:
    print 'My exception occurred, value:', e.value
