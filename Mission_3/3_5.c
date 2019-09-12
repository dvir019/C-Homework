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

//---------------------------------------------------------------------------------
//                                  Total Salary
//                                  ------------
//
// General : Calculates the total salary of a certain worker.
//
// Input   : The base salary of the worker, his seniority, the number of children
//			 he has, the number of hours he worked, and four more numbers
//			 representing the base bonuses.
//
// Process : Check if the worker needs to get bonuses, and add them to the
//			 calculation.
//
// Output  : The total salary of the worker.
//
//---------------------------------------------------------------------------------
// Programmer : Dvir Twito
// Student No : 324270883
// Date       : 12.09.2019
//---------------------------------------------------------------------------------
void main(void)
{
	// Variables defenition
	unsigned short basicSalary;
	unsigned short seniorityInYears;
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
	scanf("%hu", &seniorityInYears);

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

	totalSalary = ((float)basicSalary) *
				  ((seniorityInYears > TEN) ? SENIORITY_BONUS : ONE);

	// More than three children
	if (numberOfChildren > THREE)
	{
		// More than six children
		if (numberOfChildren > SIX)
		{
			totalSalary += (numberOfChildren - SIX) * TB + THREE * TY;
		}
		// Less than six children
		else
		{
			totalSalary += (numberOfChildren - THREE) * TY;
		}
	}
	// Worked more than one hundred and sixty hours
	if (workHours > ONE_HUNDRED_AND_SIXTY)
	{
		// Worked more than one hundred and seventy five hours
		if (workHours > ONE_HUNDRED_AND_SEVENTY_FIVE)
		{
			totalSalary += (workHours - ONE_HUNDRED_AND_SEVENTY_FIVE) * T175 +
						   FIFTEEN * T160;
		}
		// Worked more than one hundred and seventy five hours
		else
		{
			totalSalary += (workHours - ONE_HUNDRED_AND_SIXTY) * T160;
		}
	}

	// Print the result
	printf("\nThe total salary is: %f", totalSalary);
}