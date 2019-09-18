// 4_2_7.c

// This is one way to solve the problem.
// In this way, the letters should be both uppercase or both lowercase.

#include <stdio.h>

#define ONE 1

void main2(void)
{
	// Variables defenition
	char firstLetter;
	char secondLetter;
	char firstToPrint;
	char secondToPrint;
	char signToPrint;

	printf("Enter the first letter: ");
	scanf("    %c", &firstLetter);

	printf("Enter the second letter: ");
	scanf("    %c", &secondLetter);

	firstToPrint = firstLetter - ONE;
	signToPrint = '-';
	secondToPrint = secondLetter + ONE;

	if (firstLetter < secondLetter)
	{
		firstToPrint = firstLetter + ONE;
		signToPrint = '+';
		secondToPrint = secondLetter - ONE;
	}

	printf("\nThe expression is %c %c %c", firstToPrint, signToPrint, secondToPrint);
}

// 4_2_7.c

// This is another way to solve the problem.
// In this way, uppercase and lowercase don't matter.

#include <stdio.h>

#define ONE 1
#define UPPERCASE_A 'A'
#define LOWERCASE_A 'a'

void main(void)
{

	// Variables defenition
	char firstLetter;
	char secondLetter;
	char uppercaseFirstLetter;
	char uppercaseSecondLetter;
	char firstToPrint;
	char secondToPrint;
	char signToPrint;

	printf("Enter the first letter: ");
	scanf("    %c", &firstLetter);

	printf("Enter the second letter: ");
	scanf("    %c", &secondLetter);

	uppercaseFirstLetter=(firstLetter >= LOWERCASE_A) ? firstLetter - (LOWERCASE_A - UPPERCASE_A) : firstLetter;
	uppercaseSecondLetter = (secondLetter >= LOWERCASE_A) ? secondLetter - (LOWERCASE_A - UPPERCASE_A) : secondLetter;

	firstToPrint = uppercaseFirstLetter - ONE;
	signToPrint = '-';
	secondToPrint = uppercaseSecondLetter + ONE;

	if (uppercaseFirstLetter < uppercaseSecondLetter)
	{
		firstToPrint = uppercaseFirstLetter + ONE;
		signToPrint = '+';
		secondToPrint = uppercaseSecondLetter - ONE;
	}

	printf("\nThe expression is %c %c %c", firstToPrint, signToPrint, secondToPrint);
}