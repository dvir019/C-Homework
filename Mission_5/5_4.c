// 5_4.c

#include <stdio.h>
#include "../Utils/Macros.c"

#define TEN 10
#define ZERO 0

//---------------------------------------------------------------------------------
//                               Biggest Two Numbers
//                               -------------------
//
// General : Finds the biggest two numbers from ten elements.
//
// Input   : Ten numbers.
//
// Process : Compare every new number with the two biggest numbers, and change
//			 them if needed.
//
// Output  : The two biggest numbers.
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
	unsigned short max = ZERO;
	unsigned short secondMax = ZERO;
	int counter = TEN;

	// Get the numbers and find the biggest two
	for (; counter; counter--)
	{
		// Get a number
		printf("Enter a number: ");
		scanf("%hu", &number);

		// Compare the number withthe currently two biggest numbers.
		secondMax = ((number > max) ?
					(max) :
					((number == max) ? (secondMax) : (MAX(number, secondMax))));
		max = MAX(number, max);
	}

	// Print the result
	printf("The biggest numbers are %hu and %hu", max, secondMax);
}