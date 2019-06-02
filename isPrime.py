while True:
	var = input("Enter a number: ")
	number = int(var)
	if number < 2:
		break
	divNumber = 2
	isDiv = False

	for x in range(2, int(number / 2 + 1)):
		if number % x == 0:
			isDiv = True
			divNumber = x
			break

	if isDiv:
		print("Number is NOT prime. Divisible by %d" % (divNumber))
	else:
		print("Number is Prime")
