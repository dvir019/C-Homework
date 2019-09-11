// 3_3.c

#include <stdio.h>

#define ZERO 0
#define ONE 1
#define TWO 2
#define FOUR 4

void main(void)
{
	// Variables defenition
	float aTerm;
	float bTerm;
	float cTerm;
	float discriminant;
	int numberOfSolutions;

	printf("Enter the first term (a): ");
	scanf("%f", &aTerm);

	printf("Enter the second term (b): ");
	scanf("%f", &bTerm);

	printf("Enter the third term (c): ");
	scanf("%f", &cTerm);

	discriminant = bTerm * bTerm - FOUR * aTerm * cTerm;

	numberOfSolutions = (discriminant < ZERO) ? (ZERO) : (discriminant == ZERO) ? (ONE) : (TWO);
	printf("\nThe quation has %d solutions", numberOfSolutions);

	//(discriminant < ZERO) ? (printf("The equation has no solutions.")) : ((discriminant > ZERO) ? (printf("The equation has 2 solutions.")) : (printf("The equation has 1 solution.")));
}
