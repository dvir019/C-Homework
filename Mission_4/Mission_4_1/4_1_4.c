// 4_1_4.c

#include <stdio.h>

#define ONE 1
#define TWO 2
#define THREE 3

//---------------------------------------------------------------------------------
//                                 Date To Season
//                                 --------------
//
// General : Convert a number represents a date into a season.
//
// Input   : An eight-digit number that represents a date in the format DDMMYYY.
//
// Process : Determine the season by the result of dividing thr month by three.
//
// Output  : The season of the date.
//
//---------------------------------------------------------------------------------
// Programmer : Dvir Twito
// Student No : 324270883
// Date       : 15.09.2019
//---------------------------------------------------------------------------------
void main(void)
{
	// Variables defenition
	unsigned short day;
	unsigned short month;
	unsigned short year;
	unsigned short monthDivideByThree;

	// Get the number, and store its parts
	printf("Enter a date, in format DDMMYYYY:\n");
	scanf("%02hu%02hu%04hu", &day, &month, &year);

	// Find the season according to the month and print it.
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