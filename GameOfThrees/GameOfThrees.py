# game of threes

# this program takes a random number. It will see if the number is divisible by three.
# if it is not divisible by three it will either add one or subtract one to make the number divisible by three.
# the program ends when we hit the number 1

def main():
	number = input()

	while number != 1:
		if number % 3 == 0:
			print number, "\t 0"
			number = number / 3
		elif ((number + 1) % 3) == 0:
			print number, "\t+1"
			number += 1
			number = number / 3
		elif ((number - 1) % 3) == 0:
			print number, "\t-1"
			number -= 1
			number = number / 3
		else:
			print "error, no cases true"
			break;

	if number == 1:
		print "1"
	else:
		print "error occurred, please try again"

main()