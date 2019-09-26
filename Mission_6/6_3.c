// 6_3.c

#include <stdio.h>
#include "../Utils/Functions.c"

#define ZERO 0
#define TEN 10

//---------------------------------------------------------------------------------
//                               Convert To Base Ten
//                               -------------------
//
// General      : Convert a number from a given base to base ten.
//
// Parameters   :
//      number - The number to convert
//		base   - The base
//
// Return Value : The number in base ten.
//
//---------------------------------------------------------------------------------
int ConvertToBaseTen(int number, int base)
{
	// Variables defenition
	int numberInBaseTen = ZERO;
	int counter = ZERO;

	// Code section

	// Iterate over the digits
	for (; number; number /= TEN, counter++)
	{
		numberInBaseTen += (number % TEN) * Power(base, counter);
	}

	// Return the result
	return (numberInBaseTen);
}

void main(void)
{
	printf("The number in base 10 is %d", ConvertToBaseTen(43, 8));
}