// 2_1.c

// This is one way to solve the problem

#include <stdio.h>

#define BOOL unsigned short
#define TEN 10
#define ONE_HUNDRED_AND_ELEVEN 111

//---------------------------------------------------------------------------------
//                                  Equal Digits
//                                  -------------
//
// General : Check if the digits in a three digits number are equal.
//
// Input   : A three digits number.
//
// Process : Multiply the units digits by 111, and check if the new number is
//			 equal to the number.
//
// Output  : Whether or not the digits are equal.
//
//---------------------------------------------------------------------------------
// Programmer : Dvir Twito
// Student No : 324270883
// Date       : 08.09.2019
//---------------------------------------------------------------------------------
void main(void)
{
	// Variables defenition
	short number;
	unsigned short unitsDigits;
	BOOL isDigitsEqual;

	// Get the number
	printf("Enter a three digits number: ");
	scanf("%hu", &number);

	// Check if multiplying the first digits by 111 gives the number
	unitsDigits = number % TEN;
	isDigitsEqual = unitsDigits * ONE_HUNDRED_AND_ELEVEN == number;
	printf("\nThe result is: %hu (1 means they are equal, and 0 means they "
		   "are different)",
		   isDigitsEqual);
}

// 2_1.c

#include <stdio.h>

// This is another way to solve the problem

#define BOOL unsigned short
#define TEN 10
#define HUNDRED 100

//---------------------------------------------------------------------------------
//                                  Equal Digits
//                                  -------------
//
// General : Check if the digits in a three digits number are equal.
//
// Input   : A three digits number.
//
// Process : Isolate the digits of the number, and check if they are equal.
//
// Output  : Whether or not the digits are equal.
//
//---------------------------------------------------------------------------------
// Programmer : Dvir Twito
// Student No : 324270883
// Date       : 08.09.2019
//---------------------------------------------------------------------------------
void main2(void)
{
	// Variables defenition
	short number;
	unsigned short unitsDigits;
	unsigned short tensDigit;
	unsigned short hundredsDigit;
	unsigned short temp;
	BOOL isDigitsEqual;

	// Get the number
	printf("Enter a three digits number: ");
	scanf("%hu", &number);

	// Get the three digits
	temp = number;
	unitsDigits = temp % TEN;

	temp -= unitsDigits;
	temp /= TEN;

	tensDigit = temp % TEN;
	temp -= tensDigit;
	temp /= TEN;

	hundredsDigit = temp % TEN;

	// Check if the digits are equal, and print the answer
	isDigitsEqual = unitsDigits == hundredsDigit && unitsDigits == hundredsDigit;
	printf("\nThe result is: %hu (1 means they are equal, and 0 means they "
		   "are different)",
		   isDigitsEqual);
}