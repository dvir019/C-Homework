// 1_5.c

#include <stdio.h>

#define FIRST_NUMBER_REQUEST "Enter the first number: "
#define SECOND_NUMBER_REQUEST "Enter the second number: "
#define THIRD_NUMBER_REQUEST "Enter the third number: "
#define CIRCULAR_SHIFT_ANSWER "\nThe result of the circular shift is: %d %d %d \n"
#define NUMBER_PLACEHOLDER "%d"
#define CIRCULAR_SHIFT(nFirstNumber, nSecondNumber, nThirdNumber) \
	nFirstNumber = nFirstNumber + nSecondNumber + nThirdNumber;   \
	nSecondNumber = nFirstNumber - nSecondNumber - nThirdNumber;  \
	nThirdNumber = nFirstNumber - nSecondNumber - nThirdNumber;   \
	nFirstNumber = nFirstNumber - nSecondNumber - nThirdNumber;

//---------------------------------------------------------------------------------
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
//---------------------------------------------------------------------------------
// Programmer : Dvir Twito
// Student No : 324270883
// Date       : 05.09.2019
//---------------------------------------------------------------------------------
void main(void)
{
	// Variables defenition
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

	// Perform the circular shift
	CIRCULAR_SHIFT(nFirstNumber, nSecondNumber, nThirdNumber)

	// Print the result
	printf(CIRCULAR_SHIFT_ANSWER, nFirstNumber, nSecondNumber, nThirdNumber);
}