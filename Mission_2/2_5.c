// 2_5.c

#include <stdio.h>

void main(void)
{
	// Variables defenition
	float firstLeg;
	float secondLeg;
	float area;

	printf("Enter the length of the first leg: ");
	scanf("%f", &firstLeg);

	printf("Enter the length of the second leg: ");
	scanf("%f", &secondLeg);

	area = firstLeg * secondLeg;
	printf("\nThe area of the triangle is %f units squared", area);
}