// 6_2.c

#include <stdio.h>
#include "../Utils/Functions.c"

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