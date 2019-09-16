// 4_1_3.c

#include <stdio.h>

//---------------------------------------------------------------------------------
//                                 Number To Date
//                                 ---------------
//
// General : Gets a number, and turns it into a date.
//
// Input   : An eight-digit number that represents a date in the format DDMMYYY.
//
// Process : Get the number and store its parts in variables for the day, the month
//			 and the year.
//
// Output  : A message representing that date.
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

	// Get the number
	printf("Enter a date, in format DDMMYYYY:\n");
	scanf("%02hu%02hu%04hu", &day, &month, &year);

	// Print the message
	printf("\nThe year is %04hu, the month is %02hu, and the day is %02hu", year, month, day);
}