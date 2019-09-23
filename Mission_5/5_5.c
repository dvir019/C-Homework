// 5_5.c

#include <stdio.h>
#include "../Utils/Macros.c"

#define ZERO 0
#define STOP_SERIES 999

//---------------------------------------------------------------------------------
//                                 Numbers Series
//                                 --------------
//
// General : Gets series, and print the biggest and smallest elements and the sum of each one.
//
// Input   : Series on numbers.
//
// Process : Calculates the biggest and smallest element and the sum of each series.
//
// Output  : The biggest and smallest elements and the sum of each series.
//
//---------------------------------------------------------------------------------
// Programmer : Dvir Twito
// Student No : 324270883
// Date       : 22.09.2019
//---------------------------------------------------------------------------------
void main(void)
{
	// Variables defenition
	unsigned short seriesLength;
	short seriesElemnt;
	short seriesMax;
	short seriesMin;
	int seriesSum;

	// The series input and calculations.
	seriesLength = ZERO;
	while (seriesLength != STOP_SERIES)
	{
		// Get the lenght of the series
		printf("Enter the lenght of the series (Enter %d to end): ", STOP_SERIES);
		scanf("%hu", &seriesLength);

		seriesSum = ZERO;

		// Get the elements of the series
		for (; seriesLength && seriesLength != STOP_SERIES; seriesLength--)
		{
			printf("\nEnter an element of the series: ");
			scanf("%hu", &seriesElemnt);

			seriesSum += seriesElemnt;
			seriesMax = MAX(seriesMax, seriesElemnt);
			seriesMin = MIN(seriesMin, seriesElemnt);
		}
		// Print the information about the series
		if (seriesLength != STOP_SERIES)
		{
			printf("\nThe sum is %d\nThe biggest element is %hu\nThe smallest element is %hu",
				   seriesSum,
				   seriesMax,
				   seriesMin);
		}
	}
}