// 5_3.c

#include <stdio.h>

#define ONE 1
#define THREE 3

//---------------------------------------------------------------------------------
//                                 Power Of Three
//                                 --------------
//
// General : Calculates the smallest power of three that bigger than a given
//			 number.
//
// Input   : A number.
//
// Process : Multuply a variable by three until it's bigger than the given number.
//
// Output  : The smallest power of three that bigger than a given number.
//
//---------------------------------------------------------------------------------
// Programmer : Dvir Twito
// Student No : 324270883
// Date       : 21.09.2019
//---------------------------------------------------------------------------------
void main(void)
{
	// Variables defenition
	unsigned short number;
	unsigned int poewerOfThree;

	// Get the number
	printf("Enter a number: ");
	scanf("%hu", &number);

	// Calculate the power
	for (poewerOfThree = ONE; poewerOfThree <= number; poewerOfThree *= THREE);

	// Print the result
	printf("\nThe smallest power of three that bigger than %hu is %d", number, poewerOfThree);
}