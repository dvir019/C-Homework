// 2_2.c

#include <stdio.h>

#define TEN 10
#define HUNDRED 100

//---------------------------------------------------------------------------------
//                                 Reverse Number
//                                 ---------------
//
// General : Reverse a three-digits number
//
// Input   : A three-digits number
//
// Process : Repeatedly add the last digit of the number, multiply the result by
//			 ten, and divide the number by ten, to get to the next digit.
//
// Output  : The reversed number
//
//---------------------------------------------------------------------------------
// Programmer : Dvir Twito
// Student No : 324270883
// Date       : 07.09.2019
//---------------------------------------------------------------------------------
void main(void)
{
	// Variables defenition
	unsigned short number;
	unsigned short reversedNumber;
	unsigned short temp;

	// Get the number
	printf("Enter a three-digits number: ");
	scanf("%hu", &number);

	// Calculate the reversed number and print it
	temp = number;
	reversedNumber = temp % TEN;
	temp /= TEN;

	reversedNumber = reversedNumber * TEN + temp % TEN;
	temp /= TEN;

	reversedNumber = reversedNumber * TEN + temp % TEN;

	printf("\nThe reversed number is %hu", reversedNumber);
}

// If it was a four-digit number, I would repeat the process one more time:
// temp /= TEN;
// reversedNumber = reversedNumber * TEN + temp % TEN;