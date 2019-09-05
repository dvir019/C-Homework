// 1_6.c

#include <stdio.h>

#define ADULT_ENTRY_PRICE 50
#define CHILD_ENTRY_PRICE 35
#define NUMBER_OF_ADULTS_REQUEST "Enter the number of adults: "
#define NUMBER_OF_CHILDREN_REQUEST "Enter the number of children: "
#define TOTAL_PROFIT_ANSWER "\nThe pool's profit is: %hu \n"
#define NUMBER_PLACEHOLDER "%hu"
#define MULTIPLY_TWO(nFirstNumber, nSecondNumber) (nFirstNumber * nSecondNumber)

//---------------------------------------------------------------------------------
//                               Pool's Profits
//                               --------------
//
// General : Calculates the profits of the pool in a certain day.
//
// Input   : The number of adults and the number of children that entered
//			 the pool in that day.
//
// Process : Calculate sum of two multiplications.
//
// Output  : The profits of the pool on that day.
//
//---------------------------------------------------------------------------------
// Programmer : Dvir Twito
// Student No : 324270883
// Date       : 05.09.2019
//---------------------------------------------------------------------------------
void main(void)
{
	// Variables defenition
	unsigned short usAdultsNumber;
	unsigned short usChildrenNumber;

	// Get the number of adults
	printf(NUMBER_OF_ADULTS_REQUEST);
	scanf(NUMBER_PLACEHOLDER, &usAdultsNumber);

	// Get the number of children
	printf(NUMBER_OF_CHILDREN_REQUEST);
	scanf(NUMBER_PLACEHOLDER, &usChildrenNumber);

	// Print the total profit
	printf(TOTAL_PROFIT_ANSWER,
		   MULTIPLY_TWO(usAdultsNumber, ADULT_ENTRY_PRICE) +
			   MULTIPLY_TWO(usChildrenNumber, CHILD_ENTRY_PRICE));
}

// If the price was unknown, I would add two more variables, two printf
// for asking for the prices, and two more scanf to get them.