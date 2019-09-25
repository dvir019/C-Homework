// 6_3.c

#include <stdio.h>
#include "../Utils/Functions.c"

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
	int numberInBaseTen = 0;
	int counter = 0;

	// Code section

	// Iterate over the digits
	for (; number; number /= 10, counter++)
	{
		numberInBaseTen += (number % 10) * Power(base, counter);
	}

	// Return the result
	return (numberInBaseTen);
}

void main(void)
{
	printf("The number in base 10 is %d", ConvertToBaseTen(43, 8));
}