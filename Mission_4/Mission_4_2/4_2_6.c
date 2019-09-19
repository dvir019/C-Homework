// 4_2_6.c

#include <stdio.h>

#define ZERO 0
#define ONE 1
#define TWO 2
#define FOUR 4
#define NEWTON_METHOD(result, number) \
	(result = (result / 2.0) + (number / (2.0 * result)))
#define SQUARE_ROOT(result, number) \
	result = number;                \
	NEWTON_METHOD(result, number);  \
	NEWTON_METHOD(result, number);  \
	NEWTON_METHOD(result, number);  \
	NEWTON_METHOD(result, number);  \
	NEWTON_METHOD(result, number);  \
	NEWTON_METHOD(result, number);  \
	NEWTON_METHOD(result, number);  \
	NEWTON_METHOD(result, number);  \
	NEWTON_METHOD(result, number);  \
	NEWTON_METHOD(result, number);

//---------------------------------------------------------------------------------
//                               Quadratic Equation
//                               ------------------
//
// General : Prints the solutions of a quadratic equation.
//
// Input   : The three terms of the equation.
//
// Process : Calculate the discriminant, get its square root, and substitute it in
//			 the quadratic formula.
//
// Output  : The solutions of the quadratic equation.
//
//---------------------------------------------------------------------------------
// Programmer : Dvir Twito
// Student No : 324270883
// Date       : 19.09.2019
//---------------------------------------------------------------------------------
void main(void)
{
	// Variables defenition
	float aTerm;
	float bTerm;
	float cTerm;
	float discriminant;
	float discriminantRoot;
	int numberOfSolutions;
	float firstSolution;
	float secondSolution;

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

	// Calculate the solutions according to the number of solutions
	switch (numberOfSolutions)
	{
	case ONE:
		firstSolution = (-bTerm) / (TWO * aTerm);
		break;
	case TWO:
		SQUARE_ROOT(discriminantRoot, discriminant)
		firstSolution = ((-bTerm) + discriminantRoot) / (TWO * aTerm);
		secondSolution = ((-bTerm) - discriminantRoot) / (TWO * aTerm);
		break;
	default:
		break;
	}

	// Print the solutions
	switch (numberOfSolutions)
	{
	case ONE:
		printf("\nThe solution is %f", firstSolution);
		break;
	case TWO:
		printf("\nThe solutions are %f, %f", firstSolution, secondSolution);
		break;
	default:
		printf("\nThe equation has no solutions");
		break;
	}
}
