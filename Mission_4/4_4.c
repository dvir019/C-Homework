// 4_4.c

#include <stdio.h>

#define ONE 1
#define TWO 2
#define THREE 3

void main(void)
{
	// Variables defenition
	unsigned short day;
	unsigned short month;
	unsigned short year;
	unsigned short monthDivideByThree;

	printf("Enter a date, in format DDMMYYYY:\n");
	scanf("%02hu%02hu%04hu", &day, &month, &year);

	monthDivideByThree = month / THREE;

	switch (monthDivideByThree)
	{
	case ONE:
		printf("This date is part of the Spring");
		break;
	case TWO:
		printf("This date is part of the Summer");
		break;
	case THREE:
		printf("This date is part of the Autumn");
		break;
	default:
		printf("This date is part of the Winter");
		break;
	}
}