// 2_5.c

#include <stdio.h>

#define TWO 2

//---------------------------------------------------------------------------------
//                            Right Angle Triangle Area
//                            -------------------------
//
// General : Calculate the area of a right angle triangle.
//
// Input   : The length of the legs of the right angle triangle.
//
// Process : Multiply the lengths, and divide them by two.
//
// Output  : The area of the right angle triangle.
//
//---------------------------------------------------------------------------------
// Programmer : Dvir Twito
// Student No : 324270883
// Date       : 08.09.2019
//---------------------------------------------------------------------------------
void main(void)
{
	// Variables defenition
	float firstLeg;
	float secondLeg;
	float area;

	// Get the lenght of the first leg
	printf("Enter the length of the first leg: ");
	scanf("%f", &firstLeg);

	// Get the lenght of the second leg
	printf("Enter the length of the second leg: ");
	scanf("%f", &secondLeg);

	// Calculate the area and print it
	area = firstLeg * secondLeg / TWO;
	printf("\nThe area of the triangle is %f units squared", area);
}