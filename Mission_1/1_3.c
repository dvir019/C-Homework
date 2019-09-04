// Mission 1, exercise 3

#include <stdio.h>

#define DAYS_IN_WEEK 7
#define DAYS_IN_MONTH 30
#define DAYS_IN_YEAR 365
#define NUMBER_OF_DAYS_REQUEST "Enter number of days: "
#define TIME_ANSWER "\nThere are %d years, %d months and %d weeks in this time period.\n"
#define NUMBER_PLACEHOLDER "%d"

void main(void)
{
	unsigned short usTotalDays;

	printf(NUMBER_OF_DAYS_REQUEST);
	scanf(NUMBER_PLACEHOLDER, &usTotalDays);

	printf(TIME_ANSWER, usTotalDays / DAYS_IN_YEAR,
		  (usTotalDays%DAYS_IN_YEAR) / DAYS_IN_MONTH,
		  ((usTotalDays % DAYS_IN_YEAR) % DAYS_IN_MONTH) / DAYS_IN_WEEK);
}