// 5_2.c

#include <stdio.h>

#define ZERO 0
#define ONE 1
#define TEN 10
#define EOD 999

#define DIGITS_COUNT(number, result) \
	result = !number;                \
	while (number)                   \
	{                                \
		number /= 10;                \
		result++;                    \
	}

#define POWER(base, power, retValue, count) \
	count = 0;                              \
	retValue = 1;                           \
	while (power)                           \
	{                                       \
		retValue *= (power % 2) ? base : 1; \
		base *= base;                       \
		power /= 2;                         \
		count++;                            \
	}

//---------------------------------------------------------------------------------
//                                 Above Average
//                                 ---------------
//
// General : Gets unknown amount of numbers and calculates the how many of them are
//			 above the average.
//
// Input   : Unknown amount of numbers.
//
// Process : Store the numbers inside two numbers:
//			 digitsNumber - Contains a concatenation of the amount of digits the
//							numbers have.
//			 compressed   - Contains a concatenation of the numbers.
//
// Output  : How many numbers are above the average.
//
//---------------------------------------------------------------------------------
// Programmer : Dvir Twito
// Student No : 324270883
// Date       : 23.09.2019
//---------------------------------------------------------------------------------
void main(void)
{
	// Variables defenition
	unsigned short number;
	unsigned short tempNumber;
	unsigned short biggerCounter = ZERO;
	unsigned short sum = ZERO;
	float avg;
	unsigned short counter = ZERO;
	unsigned short powerResult;
	unsigned short digits;
	unsigned short tempDigits;
	unsigned short digitsNumber = ZERO;
	unsigned long long compressed = ZERO;
	unsigned short base;
	unsigned short powerCount;

	// Get the numbers and store them
	while (number != EOD)
	{
		// Get a number
		printf("Enter a number (Enter %d to stop): ", EOD);
		scanf("%hu", &number);

		// The number is not the EOD
		if (number != EOD)
		{
			tempNumber = number;
			DIGITS_COUNT(tempNumber, digits)
			tempDigits = digits;
			base = TEN;
			POWER(base, tempDigits, powerResult, powerCount)
			digitsNumber = digitsNumber * TEN + digits;
			compressed = compressed * powerResult + number;
			counter++;
			sum += number;
		}
	}

	// Calculate the average
	avg = ((float)sum) / ((float)counter);

	// Unpack the numbers from the two variables, and check if they are bigger
	// than the average
	for (; counter; counter--)
	{
		digits = digitsNumber % TEN;
		base = TEN;
		tempDigits = digits;
		POWER(base, tempDigits, powerResult, powerCount)
		number = compressed % powerResult;
		biggerCounter += (number > avg) ? ONE : ZERO;
		digitsNumber /= TEN;
		compressed /= powerResult;
	}

	// Print the result
	printf("\nThere are %hu numbers above the average.", biggerCounter);
}