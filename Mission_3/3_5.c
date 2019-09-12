// 3_5.c

#include <stdio.h>

#define SENIORITY_BONUS 1.1
#define ONE 1
#define THREE 3
#define SIX 6
#define TEN 10
#define FIFTEEN 15
#define ONE_HUNDRED_AND_SIXTY 160
#define ONE_HUNDRED_AND_SEVENTY_FIVE 175

void main(void)
{
	// Variables defenition
	unsigned short basicSalary;
	unsigned short seniorityInYeras;
	unsigned short numberOfChildren;
	unsigned short workHours;
	unsigned short T175;
	unsigned short T160;
	unsigned short TB;
	unsigned short TY;
	unsigned short childrenBonus;
	float totalSalary;

	// Get the basic salary
	printf("Enter your basic salary: ");
	scanf("%hu", &basicSalary);

	// Get the seniority
	printf("Enter your seniority: ");
	scanf("%hu", &seniorityInYeras);

	// Get the number of children
	printf("Enter the number of your children: ");
	scanf("%hu", &numberOfChildren);

	// Get the work hours
	printf("Enter your work hours: ");
	scanf("%hu", &workHours);

	// Get T175
	printf("Enter T175: ");
	scanf("%hu", &T175);

	// Get T160
	printf("Enter T160: ");
	scanf("%hu", &T160);

	// Get TB
	printf("Enter TB: ");
	scanf("%hu", &TB);

	// Get TY
	printf("Enter TY: ");
	scanf("%hu", &TY);

	totalSalary = ((float)basicSalary) * (seniorityInYeras > TEN) ? SENIORITY_BONUS : ONE;

// 
	if (numberOfChildren > THREE)
	{
		if (numberOfChildren > SIX)
		{
			totalSalary += (numberOfChildren - SIX) * TB + THREE * TY;
		}
		else
		{
			totalSalary += (numberOfChildren - THREE) * TY;
		}
	}
	if (workHours > ONE_HUNDRED_AND_SIXTY)
	{
		if (workHours > ONE_HUNDRED_AND_SEVENTY_FIVE)
		{
			totalSalary += (workHours - ONE_HUNDRED_AND_SEVENTY_FIVE) * T175 + FIFTEEN * T160;
		}
		else
		{
			totalSalary += (workHours - ONE_HUNDRED_AND_SIXTY) * T160;
		}
	}

	// Print the result
	printf("\nThe total salary is: %f", totalSalary);
}