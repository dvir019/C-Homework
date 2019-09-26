// 6_1.c

#include <stdio.h>
#include "../Utils/Macros.c"

#define ONE_HUNDRED 100
#define TEN_THOUSAND 10000
#define DAYS_IN_YEAR 365
#define DAYS_IN_MONTH 30

//---------------------------------------------------------------------------------
//                                  Date To Days
//                                  ------------
//
// General      : Converts a date in format DDMMYYYY into days.
//
// Parameters   :
//      date - The date
//
// Return Value : The amount of days in the date.
//
//---------------------------------------------------------------------------------
int DateToDays(int date)
{
	// Variables defenition
	unsigned short year;
	unsigned short month;
	unsigned short day;
	int days;

	// Code section

	// Calculate the year, month and day
	year = date % TEN_THOUSAND;
	date -= year;
	date /= TEN_THOUSAND;
	month = date % ONE_HUNDRED;
	date -= month;
	date /= ONE_HUNDRED;
	day = date % ONE_HUNDRED;

	// Convert to days
	days = day;
	days += month * DAYS_IN_MONTH;
	days += year * DAYS_IN_YEAR;

	// Return the result
	return (days);
}

//---------------------------------------------------------------------------------
//                                  Days To Date
//                                  ------------
//
// General      : Converts amount of days into a date in format DDMMYYYY.
//
// Parameters   :
//      days - The amount of days
//
// Return Value : The date in format DDMMYYYY.
//
//---------------------------------------------------------------------------------
int DaysToDate(int days)
{
	// Variables defenition
	unsigned short year;
	unsigned short month;
	unsigned short day;
	int date;

	// Code section

	// Calculate the year, month and day
	year = days / DAYS_IN_YEAR;
	days -= year * DAYS_IN_YEAR;
	month = days / DAYS_IN_MONTH;
	days -= month * DAYS_IN_MONTH;
	day = days;

	// Calculate the date
	date = day;
	date = date * ONE_HUNDRED + month;
	date = date * TEN_THOUSAND + year;

	// Return the result
	return (date);
}

//---------------------------------------------------------------------------------
//                                 Date Difference
//                                 ---------------
//
// General      : Calculates the difference between two dates.
//
// Parameters   :
//      firstDate  - The first date, in format DDMMYYYY
//      secondDate - The second date, in format DDMMYYYY
//
// Return Value : The difference between the dates in format DDMMYYYY.
//
//---------------------------------------------------------------------------------
int DateFifference(int firstDate, int secondDate)
{
	// Variables defenition
	int firstDays;
	int secondDays;
	int daysDifference;

	// Code section

	firstDate = DateToDays(firstDate);
	secondDate = DateToDays(secondDate);

	daysDifference = firstDate - secondDate;
	daysDifference = ABS(daysDifference);

	return DaysToDate(daysDifference);
}

void main(void)
{
	printf("%d", DateFifference(5052021, 4042020));
}