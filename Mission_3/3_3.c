// 3_3.c

#include <stdio.h>

#define ZERO 0
#define ONE 1
#define TWO 2
#define FOUR 4

//---------------------------------------------------------------------------------
//                               Quadratic Equation
//                               ------------------
//
// General : Checks how many solutions a quadratic equation has.
//
// Input   : The three terms of the equation.
//
// Process : Calculate the discriminant, and compare it to zero.
//
// Output  : The number of solutions the equation has.
//			 In addition, if it has one, it prints it.
//
//---------------------------------------------------------------------------------
// Programmer : Dvir Twito
// Student No : 324270883
// Date       : 11.09.2019
//---------------------------------------------------------------------------------
void main(void)
{
	// Variables defenition
	float aTerm;
	float bTerm;
	float cTerm;
	float discriminant;
	int numberOfSolutions;
	float solution;

	// Get the a term
	printf("Enter the first term (a): ");
	scanf("%f", &aTerm);

	// Get the b term
	printf("Enter the second term (b): ");
	scanf("%f", &bTerm);

	// Get the c term
	printf("Enter the third term (c): ");
	scanf("%f", &cTerm);

	// Calculate the discriminant
	discriminant = bTerm * bTerm - FOUR * aTerm * cTerm;

	numberOfSolutions = (discriminant < ZERO) ? 
						(ZERO) : 
						(discriminant == ZERO) ? (ONE) : (TWO);
	
	// Print the number of solutions
	printf("\nThe quation has %d solutions", numberOfSolutions);

	// If the equation has only one solution, get it
	// (because it doesn't require square root)
	if (numberOfSolutions == ONE)
	{
		solution = (-bTerm) / (TWO * aTerm);
		printf("\nThe solution is: %f", solution);
	}
}
