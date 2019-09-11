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
	int max;
	int mid;
	int min;
	char code;

	printf("Enter the first number: ");
	scanf("%d", &firstNumber);

	printf("Enter the second number: ");
	scanf("%d", &secondNumber);

	printf("Enter the third number: ");
	scanf("%d", &thirdNumber);

	printf("Enter U if you want to print the numbers in ascending order, and D if you want in descending order");
	scanf("%c", code);

	max = firstNumber;
	max = MAX(MAX(max, secondNumber), thirdNumber);

	min = secondNumber;
	min = MIN(MIN(min, firstNumber), thirdNumber);

	mid = firstNumber + secondNumber + thirdNumber - max - min;

	if (code == ASCENDING_ORDER)
	{
		printf("The ordered numbers are: %d, %d, %d", min, mid, max);
	}
	if (code == DECENDING_ORDER)
	{
		printf("The ordered numbers are: %d, %d, %d", max, mid, min);
	}
}