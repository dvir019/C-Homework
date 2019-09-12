// 3_5.c

#include <stdio.h>

#define SENIORITY_BONUS 1.1
#define ONE 1
#define THREE 3
#define SIX 6
#define TEN 10
#define FIFTEEN 15
#define ONE_HUNDRED_AND_SIXTY 160

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

	printf("Enter your basic salary: ");
	scanf("%hu", &basicSalary);

	printf("Enter your seniority: ");
	scanf("%hu", &seniorityInYeras);

	printf("Enter the number of your children: ");
	scanf("%hu", &numberOfChildren);

	printf("Enter your work hours: ");
	scanf("%hu", &workHours);

	printf("Enter T175: ");
	scanf("%hu", &T175);

	printf("Enter T160: ");
	scanf("%hu", &T160);

	printf("Enter TB: ");
	scanf("%hu", &TB);

	printf("Enter TY: ");
	scanf("%hu", &TY);

	totalSalary = ((float)basicSalary) * (seniorityInYeras > TEN) ? SENIORITY_BONUS : ONE;

	if (numberOfChildren>THREE)
	{
		
		
	}
}