import math

while True:
	var = input("Enter a number: ")
	number = int(var)
	if number < 2:
		break
	divNumber = 2
	isDiv = False

	if number > 2:
		for x in range(2, math.ceil(math.sqrt(number)) + 1):
			if number % x == 0:
				isDiv = True
				divNumber = x
				break

	if isDiv:
		print("Number is NOT prime. Divisible by %d" % (divNumber))
	else:
		print("Number is Prime")
