// 4_3.c

#include <stdio.h>

void main(void)
{
	// Variables defenition
	unsigned short day;
	unsigned short month;
	unsigned short year;

	printf("Enter a date, in format DDMMYYYY:\n");
	scanf("%02hu%02hu%04hu", &day, &month, &year);

	printf("\nThe year is %04hu, the month is %02hu, and the day is %02hu", year, month, day);
}