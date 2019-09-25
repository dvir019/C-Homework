// Functions.c
#include <stdio.h>
#include "Defines.c"

//---------------------------------------------------------------------------------
//                                     Is Even
//                                     -------
//
// General      : Checks if the given number is even.
//
// Parameters   :
//      number - The number
//
// Return Value : Whether or not the number is even.
//
//---------------------------------------------------------------------------------
BOOLEAN IsEven(int number)
{
	return (number % 2 == 0);
}

//---------------------------------------------------------------------------------
//                                      Is Odd
//                                      ------
//
// General      : Checks if the given number is odd.
//
// Parameters   :
//      number - The number
//
// Return Value : Whether or not the number is odd.
//
//---------------------------------------------------------------------------------
BOOLEAN IsOdd(int number)
{
	return (!IsEven(number));
}

//---------------------------------------------------------------------------------
//                                 Number Of Digits
//                                 ----------------
//
// General      : Calculates the number of digits in a given number.
//
// Parameters   :
//      number - The number
//
// Return Value : The Number of digits in the number.
//
//---------------------------------------------------------------------------------
int NumberOfDgits(int number)
{
	// Variables defenition
	int counter = !number;

	// Code section

	// Iterate over the digits
	for (; number; number /= 10)
	{
		counter++;
	}

	// Return the result
	return (counter);
}

//---------------------------------------------------------------------------------
//                                  Sum Of Digits
//                                  -------------
//
// General      : Calculates the sum of digits of a given number.
//
// Parameters   :
//      number - The number
//
// Return Value : The sum of digits of the number.
//
//---------------------------------------------------------------------------------
int SumOfDigits(int number)
{
	// Variables defenition
	int sum = 0;

	// Code section

	// Iterate over the digits
	for (; number; number /= 10)
	{
		sum += number % 10;
	}

	// Return the result
	return (sum);
}

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

	// Code section

	// Iterate over the digits
	for (; number; number /= 10)
	{
		reversed = (reversed * 10) + (number % 10);
	}

	// Return the result
	return (reversed);
}

//---------------------------------------------------------------------------------
//                                  Even Digits
//                                  -----------
//
// General      : Creates a new number that contains only the even digits of a
//				  given number.
//
// Parameters   :
//      number - The number
//
// Return Value : A new number that contains only the even digits of the number.
//
//---------------------------------------------------------------------------------
int EvenDigits(int number)
{
	// Variables defenition
	int reversedEvenDigits = 0;
	int lastDigit;

	// Code section

	// Iterate over the digits
	for (; number; number /= 10)
	{
		lastDigit = number % 10;
		reversedEvenDigits = (IsEven(lastDigit)) ?
							 (reversedEvenDigits * 10 + lastDigit) :
							 (reversedEvenDigits);
	}

	// Return the new number
	return (ReverseNumber(reversedEvenDigits));
}

//---------------------------------------------------------------------------------
//                                  Odd Digits
//                                  -----------
//
// General      : Creates a new number that contains only the odd digits of a
//				  given number.
//
// Parameters   :
//      number - The number
//
// Return Value : A new number that contains only the odd digits of the number.
//
//---------------------------------------------------------------------------------
int OddDigits(int number)
{
	// Variables defenition
	int reversedOddDigits = 0;
	int lastDigit;

	// Code section

	// Iterate over the digits
	for (; number; number /= 10)
	{
		lastDigit = number % 10;
		reversedOddDigits = (IsOdd(lastDigit)) ?
							 (reversedOddDigits * 10 + lastDigit) :
							 (reversedOddDigits);
	}

	// Return the new number
	return (ReverseNumber(reversedOddDigits));
}

void main(void)
{
	printf("%d", OddDigits(1122634598));
}
