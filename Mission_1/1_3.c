// 1_3.c

#include <stdio.h>

#define DAYS_IN_WEEK 7
#define DAYS_IN_MONTH 30
#define DAYS_IN_YEAR 365
#define NUMBER_OF_DAYS_REQUEST "Enter number of days: "
#define TIME_ANSWER "\nThere are %hu years, %hu months and %hu weeks in this" \
					"time period.\n"
#define NUMBER_PLACEHOLDER "%hu"
#define NUMBER_OF_YEARS (usTotalDays / DAYS_IN_YEAR)
#define NUMBER_OF_MONTHS (usTotalDays % DAYS_IN_YEAR) / DAYS_IN_MONTH
#define NUMBER_OF_WEEKS (((usTotalDays % DAYS_IN_YEAR) % DAYS_IN_MONTH) / DAYS_IN_WEEK)

//---------------------------------------------------------------------------------
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
//---------------------------------------------------------------------------------
// Programmer : Dvir Twito
// Student No : 324270883
// Date       : 04.09.2019
//---------------------------------------------------------------------------------
void main(void)
{
	// Variables defenition
	unsigned short usTotalDays;

	// Get the number of days
	printf(NUMBER_OF_DAYS_REQUEST);
	scanf(NUMBER_PLACEHOLDER, &usTotalDays);

	// Print the answers
	printf(TIME_ANSWER, NUMBER_OF_YEARS, NUMBER_OF_MONTHS, NUMBER_OF_WEEKS);
}