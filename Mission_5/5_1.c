// 5_1.c

#include <stdio.h>
#include "../Utils/Defines.c"

#define TEN 10

//---------------------------------------------------------------------------------
//                                  Common Digits
//                                  -------------
//
// General : Checks whether or not two numbers have common digits.
//
// Input   : Two numbers.
//
// Process : Compare every digits of the first number with every ditit of the
//			 second number until there is a match.
//
// Output  : Whether or those numbers have common digits.
//
//---------------------------------------------------------------------------------
// Programmer : Dvir Twito
// Student No : 324270883
// Date       : 22.09.2019
//---------------------------------------------------------------------------------
void main(void)
{
	// Variables defenition
	unsigned short firstNumber;
	unsigned short secondNumber;
	unsigned short tempFirstNumber;
	unsigned short tempSecondNumber;
	BOOLEAN commonDigits;

	// Get the first number
	printf("Enter a natural number: ");
	scanf("%hu", &firstNumber);

	// Get the first number
	printf("Enter a natural number: ");
	scanf("%hu", &secondNumber);

	// Compare the digits of the two numbers
	for (tempFirstNumber = firstNumber, tempSecondNumber = secondNumber,
			commonDigits = FALSE;
		 tempFirstNumber && !commonDigits;
		 (tempSecondNumber) ?
		 	((tempFirstNumber % TEN == tempSecondNumber % TEN) ?
			 	(commonDigits = TRUE) :
				(tempSecondNumber /= TEN)) :
			(tempSecondNumber = secondNumber, tempFirstNumber /= TEN));

	// Print the result
	commonDigits ? printf("\nThere are common digits") : printf("\nNo common digits");
}