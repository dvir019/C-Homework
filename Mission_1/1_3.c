// 1_3.c

#include <stdio.h>

#define DAYS_IN_WEEK 7
#define DAYS_IN_MONTH 30
#define DAYS_IN_YEAR 365
#define NUMBER_OF_DAYS_REQUEST "Enter number of days: "
#define TIME_ANSWER "\nThere are %d years, %d months and %d weeks in this time period.\n"
#define NUMBER_PLACEHOLDER "%d"

//-----------------------------------------------------------------------------
//                               Convert Days
//                               ------------
//
// General : Converts amount of days into years, months and weeks.
//
// Input   : The number of days.
//
// Process : Calculate the number of years, months and weeks by
//			 divion and modulo.
//           * Assumption: There are 30 days in a month.
//
// Output  : Print the number of years, months and weeks.
//
//-----------------------------------------------------------------------------
// Programmer : Dvir Twito
// Student No : 
// Date       : 04.09.2019
//-----------------------------------------------------------------------------
void main(void)
{
	// Variables Defenition
	unsigned short usTotalDays;

	// Get the number of days
	printf(NUMBER_OF_DAYS_REQUEST);
	scanf(NUMBER_PLACEHOLDER, &usTotalDays);

	// Print the answers
	printf(TIME_ANSWER, usTotalDays / DAYS_IN_YEAR,
		   (usTotalDays % DAYS_IN_YEAR) / DAYS_IN_MONTH,
		   ((usTotalDays % DAYS_IN_YEAR) % DAYS_IN_MONTH) / DAYS_IN_WEEK);
}