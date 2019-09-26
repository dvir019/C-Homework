// 6_2.c

#include <stdio.h>
#include "../Utils/Functions.c"

//---------------------------------------------------------------------------------
//                                  Sum Of New Numbers
//                                  ------------------
//
// General      : Calculates the sum of the number that created from the even
//				  digits of the number and the number that created from the odd
//				  digits of the number.
//
// Parameters   :
//      number - The number.
//
// Return Value : The sum of the number that created from the even digits of the
//				  number and the number that created from the odd digits of the
//				  number.
//
//---------------------------------------------------------------------------------
int SumOfNewNumbers(int number)
{
	// Variables defenition
	int evenDigits;
	int oddDigits;

	// Code section

	// Create the two new numbers
	evenDigits = EvenDigits(number);
	oddDigits = OddDigits(number);

	// Return the sum
	return (evenDigits + oddDigits);
}

void main(void)
{
	printf("The sum is: %d", SumOfNewNumbers(5243617));
}