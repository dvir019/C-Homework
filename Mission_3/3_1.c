// 3_1.c

#include <stdio.h>
#include "../Macros/Macros.c"

#define ASCENDING_ORDER 'U'
#define DECENDING_ORDER 'D'

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

	printf("Enter the first number: ");
	scanf("%d", &firstNumber);

	printf("Enter the second number: ");
	scanf("%d", &secondNumber);

	printf("Enter the third number: ");
	scanf("%d", &thirdNumber);

	printf("Enter U if you want to print the numbers in ascending order, and D if you want in descending order: ");
	scanf("   %c", &code);

	printFirst = firstNumber;
	printFirst = MAX(MAX(printFirst, secondNumber), thirdNumber);

	printThird = secondNumber;
	printThird = MIN(MIN(firstNumber, printThird), thirdNumber);
	printSecond = firstNumber + secondNumber + thirdNumber - printFirst - printThird;

	// Decending order
	if (code == DECENDING_ORDER)
	{
		printf("The ordered numbers are: %d, %d, %d", printFirst, printSecond, printThird);
	}
	// Ascending order or invalid code
	else
	{
		// Ascending order
		if (code == ASCENDING_ORDER)
		{
			SWAP(printFirst, printThird);
			printf("The ordered numbers are: %d, %d, %d", printFirst, printSecond, printThird);
		}
		
		// Invalid code
		else
		{
			printf("Your code is not valid");
		}
	}
}