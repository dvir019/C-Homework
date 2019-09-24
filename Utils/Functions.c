// Functions.c
#include <stdio.h>

//---------------------------------------------------------------------------------
//                                 Reverse Number
//                                 --------------
//
// General      : Reverses a given number.
//
// Parameters   :
//      number - The number to reverse
//
// Return Value : The reversed number.
//
//---------------------------------------------------------------------------------
int ReverseNumber(int number)
{
	// Variables defenition
	int reversed = 0;

	// Iterate over the digits
	for (; number; number /= 10)
	{
		reversed = (reversed * 10) + (number % 10);
	}

	return (reversed);
}

void main(void)
{
	printf("%d", ReverseNumber(1));
}
