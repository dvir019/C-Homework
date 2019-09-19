// 4_2_7.c

// This is one way to solve the problem.
// In this way, the letters should be both uppercase or both lowercase.

#include <stdio.h>

#define ONE 1

//---------------------------------------------------------------------------------
//                                   Two Letters
//                                   -----------
//
// General : Prints a message according to the user's input.
//
// Input   : Two letters.
//
// Process : Checks if the first letters appears before the second letter
//			 (in alphabetically order).
//
// Output  : Customized message, according to the letters.
//
//---------------------------------------------------------------------------------
// Programmer : Dvir Twito
// Student No : 324270883
// Date       : 18.09.2019
//---------------------------------------------------------------------------------
void main2(void)
{
	// Variables defenition
	char firstLetter;
	char secondLetter;
	char firstToPrint;
	char secondToPrint;
	char signToPrint;

	// Get the first letter
	printf("Enter the first letter: ");
	scanf("    %c", &firstLetter);

	// Get the first letter
	printf("Enter the second letter: ");
	scanf("    %c", &secondLetter);

	// Set the variables, asuming that the second letter is after the first letter.
	firstToPrint = firstLetter - ONE;
	signToPrint = '-';
	secondToPrint = secondLetter + ONE;

	// The first letter is after the second letter.
	if (firstLetter < secondLetter)
	{
		firstToPrint = firstLetter + ONE;
		signToPrint = '+';
		secondToPrint = secondLetter - ONE;
	}

	// Print the answer
	printf("\nThe expression is %c %c %c",
		   firstToPrint,
		   signToPrint,
		   secondToPrint);
}

// 4_2_7.c

// This is another way to solve the problem.
// In this way, uppercase and lowercase don't matter.

#include <stdio.h>

#define ONE 1
#define UPPERCASE_A 'A'
#define LOWERCASE_A 'a'

//---------------------------------------------------------------------------------
//                                   Two Letters
//                                   -----------
//
// General : Prints a message according to the user's input.
//
// Input   : Two letters.
//
// Process : Turn both of the letters to uppercase(int new variables), and Checks
//			 if the first letters appears before the second letter
//			 (in alphabetically order).
//
// Output  : Customized message, according to the letters.
//
//---------------------------------------------------------------------------------
// Programmer : Dvir Twito
// Student No : 324270883
// Date       : 18.09.2019
//---------------------------------------------------------------------------------
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

	// Get the first letter
	printf("Enter the first letter: ");
	scanf("    %c", &firstLetter);

	// Get the second letter
	printf("Enter the second letter: ");
	scanf("    %c", &secondLetter);

	// Get the uppercase of the two letters
	uppercaseFirstLetter = (firstLetter >= LOWERCASE_A) ?
						    firstLetter - (LOWERCASE_A - UPPERCASE_A) :
						    firstLetter;
	uppercaseSecondLetter = (secondLetter >= LOWERCASE_A) ?
							secondLetter - (LOWERCASE_A - UPPERCASE_A) :
							secondLetter;

	// Set the variables, asuming that the second letter is after the first letter.
	firstToPrint = uppercaseFirstLetter - ONE;
	signToPrint = '-';
	secondToPrint = uppercaseSecondLetter + ONE;

	// The first letter is after the second letter.
	if (uppercaseFirstLetter < uppercaseSecondLetter)
	{
		firstToPrint = uppercaseFirstLetter + ONE;
		signToPrint = '+';
		secondToPrint = uppercaseSecondLetter - ONE;
	}
	
	// Print the answer
	printf("\nThe expression is %c %c %c",
		   firstToPrint,
		   signToPrint,
		   secondToPrint);
}