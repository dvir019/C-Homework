// 3_2.c

#include <stdio.h>
#include "../Macros/Macros.c"

#define TRIANGLE_ANGLES_SUM 180
#define NINETY 90
#define SIXTY 60
#define ACUTE_TRIANGLE 1
#define OBTUSE_TRIANGLE 2
#define RIGHT_ANGLE_TRIANGLE 3
#define EQUILATERAL_TRIANGLE 1
#define ISOSCELES_TRIANGLE 2
#define SCALENE_TRIANGLE 3
#define NOT_TRIANGLE 0

void main(void)
{
	// Variables defenition
	float firstAngle;
	float secondAngle;
	float thirdAngle;
	float biggestAngle;
	float smallestAngle;
	float middleAngle;
	unsigned short sidesType;
	unsigned short anglesType;

	// Get the first angle
	printf("Enter the first angle: ");
	scanf("%f", &firstAngle);

	// Get the second angle
	printf("Enter the second angle: ");
	scanf("%f", &secondAngle);

	// Get the third angle
	printf("Enter the third angle: ");
	scanf("%f", &thirdAngle);

	// Find the biggest, smallest and middle angle
	biggestAngle = firstAngle;
	biggestAngle = MAX(MAX(biggestAngle, secondAngle), thirdAngle);
	smallestAngle = secondAngle;
	smallestAngle = MIN(MIN(smallestAngle, firstAngle), thirdAngle);
	middleAngle = firstAngle + secondAngle + thirdAngle - biggestAngle - smallestAngle;

	// The angles form a triangle
	if (firstAngle + secondAngle + thirdAngle == TRIANGLE_ANGLES_SUM)
	{
		// Acute triangle
		if (biggestAngle < NINETY)
		{
			anglesType = ACUTE_TRIANGLE;
		}

		// Obtuse or Right angle triangle
		else
		{
			// Obtuse triangle
			if (biggestAngle > NINETY)
			{
				anglesType = OBTUSE_TRIANGLE;
			}

			// Right angle triangle
			else
			{
				anglesType = RIGHT_ANGLE_TRIANGLE;
			}
		}

		// Equilateral or isosceles triangle
		if (biggestAngle == smallestAngle)
		{
			// Equilateral triangle
			if (smallestAngle == middleAngle)
			{
				sidesType = EQUILATERAL_TRIANGLE;
			}

			// Isosceles triangle
			else
			{
				sidesType = ISOSCELES_TRIANGLE;
			}
		}

		// Isosceles or scalene triangle
		else
		{
			// Isosceles triangle
			if (middleAngle == smallestAngle)
			{
				sidesType = ISOSCELES_TRIANGLE;
			}

			// Scalene triangle
			else
			{
				sidesType = SCALENE_TRIANGLE;
			}
		}
	}
	// The angles don't form a triangle
	else
	{
		anglesType = NOT_TRIANGLE;
		sidesType = NOT_TRIANGLE;
	}

	printf("\nAngles type: %hu\nSides type: %hu\n\n"
		   "The meaning of the angles types:\n%hu - Not a tiangle\n%hu - Acute\n"
		   "%hu - Obtuse\n%hu - Right angle\n\nThe meaning of the sides types:\n"
		   "%hu - Not a tiangle\n%hu - Equilateral\n%hu - Isosceles\n%hu - Scalene",
		   anglesType,
		   sidesType,
		   NOT_TRIANGLE,
		   ACUTE_TRIANGLE,
		   OBTUSE_TRIANGLE,
		   RIGHT_ANGLE_TRIANGLE,
		   NOT_TRIANGLE,
		   EQUILATERAL_TRIANGLE,
		   ISOSCELES_TRIANGLE,
		   SCALENE_TRIANGLE);
}