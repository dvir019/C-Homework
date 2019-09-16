// 4_2_5.c

#define ONE 1
#define TWO 2

#define ABS(number) ((number) * ((TWO * number + ONE) % TWO))

//---------------------------------------------------------------------------------
//                                 Max Without If
//                                 ---------------
//
// General : Gets the maximum value between two numbers, without using any
//			 conditions.
//
// Input   : None.
//
// Process : Sum up the average of the numbers and half of the absolute value of
//			 their difference.
//
// Output  : None.
//
//---------------------------------------------------------------------------------
// Programmer : Dvir Twito
// Student No : 324270883
// Date       : 15.09.2019
//---------------------------------------------------------------------------------
void main(void)
{
	// Variables defenition
	int firstNumber;
	int secondNumber;
	int absDifference;
	int max;

	firstNumber = 5;
	secondNumber = 8;

	// Get the absolute value of the difference
	absDifference = firstNumber - secondNumber;
	absDifference = ABS(absDifference);

	// Calculate the max value
	max = (firstNumber + secondNumber) / TWO + (absDifference / TWO);
}