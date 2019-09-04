// Mission 1, exercise 5

#include <stdio.h>

#define FIRST_NUMBER_REQUEST "Enter the first number: "
#define SECOND_NUMBER_REQUEST "Enter the second number: "
#define THIRD_NUMBER_REQUEST "Enter the third number: "
#define CIRCULAR_SHIFT_ANSWER "\nThe result of the circular shift is: %d %d %d \n"
#define NUMBER_PLACEHOLDER "%d"

//-----------------------------------------------------------------------------
//                               Circular Shift
//                               -------------
//
// General : Performs a circular shift for three numbers.
//
// Input   : Three numbers.
//
// Process : Print the numbers in a new order.
//
// Output  : Print yhe circular shift of the three numbers.
//
//-----------------------------------------------------------------------------
// Programmer : Dvir Twito
// Student No : 
// Date       : 05.09.2019
//-----------------------------------------------------------------------------
void main(void)
{
	// Variables Defenition
	int nFirstNumber;
	int nSecondNumber;
	int nThirdNumber;

	// Get the first number
	printf(FIRST_NUMBER_REQUEST);
	scanf(NUMBER_PLACEHOLDER, &nFirstNumber);

	// Get the second number
	printf(SECOND_NUMBER_REQUEST);
	scanf(NUMBER_PLACEHOLDER, &nSecondNumber);

	// Get the third number
	printf(THIRD_NUMBER_REQUEST);
	scanf(NUMBER_PLACEHOLDER, &nThirdNumber);

	// Print the result
	printf(CIRCULAR_SHIFT_ANSWER, nThirdNumber, nFirstNumber, nSecondNumber);
}