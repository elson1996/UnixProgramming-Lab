number = input("Enter the number: ")
divisorSum = 0
for i in range (1,number):
    if number%i == 0:
        divisorSum += i
if divisorSum == number:
    print str(number) + " is a perfect Number"
else:
    print str(number) + " is not a perfect number"
