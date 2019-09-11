// 3_2.c

#include <stdio.h>
#include "../Macros/Macros.c"

#define TRIANGLE_ANGLES_SUM 180
#define NINETY 90
#define SIXTY 60

void main(void)
{
	// Variables defenition
	float firstAngle;
	float secondAngle;
	float thirdAngle;
	float biggestAngle;
	float smallestAngle;
	float middleAngle;

	printf("Enter the first angle: ");
	scanf("%d", &firstAngle);

	printf("Enter the second angle: ");
	scanf("%d", &secondAngle);

	printf("Enter the third angle: ");
	scanf("%d", &thirdAngle);

	biggestAngle = firstAngle;
	biggestAngle = MAX(MAX(biggestAngle, secondAngle), thirdAngle);
	smallestAngle = secondAngle;
	smallestAngle = MIN(MIN(smallestAngle, firstAngle), thirdAngle);
	middleAngle = firstAngle + secondAngle + thirdAngle - biggestAngle - smallestAngle;

	if (firstAngle + secondAngle + thirdAngle == TRIANGLE_ANGLES_SUM)
	{
		// Acute triangle
		if (biggestAngle < NINETY)
		{
			printf("Angle types: Acute.\n");
		}

		// Obtuse triangle
		if (biggestAngle > NINETY)
		{
			printf("Angle types: Obtuse .\n");
		}

		// Right angle
		if (biggestAngle > NINETY)
		{
			printf("Angle types: Right angle.\n");
		}

		if(biggestAngle==SIXTY)
		{
			printf("Sides types: Equilateral.\n");
		}
	}
}