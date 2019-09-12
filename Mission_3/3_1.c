// 3_1.c

#include <stdio.h>
#include "../Macros/Macros.c"

#define ASCENDING_ORDER 'U'
#define DECENDING_ORDER 'D'

//---------------------------------------------------------------------------------
//                                  Print Sorted
//                                  ------------
//
// General : Prints three numbers in ascending or descending order.
//
// Input   : Three numbers and a char.
//
// Process : Sort the numbers in ascending order, and swap between them if needed.
//
// Output  : The three numbers, in ascending or descending order, upon the code.
//
//---------------------------------------------------------------------------------
// Programmer : Dvir Twito
// Student No : 324270883
// Date       : 11.09.2019
//---------------------------------------------------------------------------------
void main(void)
{
	// Variables defenition
	int firstNumber;
	int secondNumber;
	int thirdNumber;
	int printFirst;
	int printSecond;
	int printThird;
	char code;

	// Get the first number
	printf("Enter the first number: ");
	scanf("%d", &firstNumber);

	// Get the second number
	printf("Enter the second number: ");
	scanf("%d", &secondNumber);

	// Get the third number
	printf("Enter the third number: ");
	scanf("%d", &thirdNumber);

	// Get the code
	printf("Enter U if you want to print the numbers in ascending order,"
		   "and D if you want in descending order: ");
	scanf("   %c", &code);

	// Sort the numbers
	printFirst = firstNumber;
	printFirst = MAX(MAX(printFirst, secondNumber), thirdNumber);

	printThird = secondNumber;
	printThird = MIN(MIN(printThird, firstNumber), thirdNumber);

	printSecond = firstNumber + secondNumber + thirdNumber;
	printSecond -= (printFirst + printThird);

	// Decending order
	if (code == DECENDING_ORDER)
	{
		printf("The ordered numbers are: %d, %d, %d",
			   printFirst,
			   printSecond,
			   printThird);
	}
	// Ascending order or invalid code
	else
	{
		// Ascending order
		if (code == ASCENDING_ORDER)
		{
			SWAP(printFirst, printThird);
			printf("The ordered numbers are: %d, %d, %d",
				   printFirst,
				   printSecond,
				   printThird);
		}
		// Invalid code
		else
		{
			printf("Your code is not valid");
		}
	}
}