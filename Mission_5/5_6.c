// 5_6.c

#include <stdio.h>
#include "../Utils/Macros.c"

#define ACCURACY 0.00000001
#define ZERO 0
#define ONE 1
#define TWO 2
#define ONE_THOUSAND 1000

#define SQRT(number, result, temp, accuracy) \
	result = number;                         \
	temp = 1;                                \
	while (result - temp > accuracy)         \
	{                                        \
		result = (result + temp) / 2;        \
		temp = number / result;              \
	}

//---------------------------------------------------------------------------------
//                                 Divisble Numbers
//                                 ---------------
//
// General : Finds all of the s to a given pair of numbers that are
//			 smaller than one thousand.
//
// Input   : Two numbers.
//
// Process : Iterate over the numbers and search for a common divisor.
//
// Output  : All of the common divisors to the numbers that are smaller than one
//			 thousand.
//
//---------------------------------------------------------------------------------
// Programmer : Dvir Twito
// Student No : 324270883
// Date       : 23.09.2019
//---------------------------------------------------------------------------------
void main(void)
{
	// Variables defenition
	unsigned short firstNumber;
	unsigned short secondNumber;
	unsigned short counter;

	// Get the first number
	printf("Enter a whole number that is bigger than 1: ");
	scanf("%hu", &firstNumber);

	// Get the second number
	printf("Enter a whole number that is bigger than 1 and doesn't divisible divisible by the first number: ");
	scanf("%hu", &secondNumber);

	// Find the first number for the loop
	counter = MIN(firstNumber, secondNumber);
	counter = counter / TWO + ONE;
	counter = MIN(counter, ONE_THOUSAND);

	// Iterate the numbers and find those that divide by both of the numbers is
	for (; counter; counter--)
	{
		if (firstNumber % counter == ZERO && secondNumber % counter == ZERO)
		{
			printf("A common divisor: %hu\n", counter);
		}
	}
}