// 2_3.c

#include <stdio.h>

#define ZERO 0
#define TWO 2
#define MINUTES_IN_HOUR 60
#define SECONDS_IN_MINUTE 60
#define SECONDS_IN_HOUR 3600

//---------------------------------------------------------------------------------
//                                 Time Differnce
//                                 ---------------
//
// General : Gets the difference between to times.
//
// Input   : Two times, in format HH:MM:SS.
//
// Process : Convert both of the times to seconds, subtract the results, and
//			 convert it to a new time, in the format HH:MM:SS.
//
// Output  : The difference between the times.
//
//---------------------------------------------------------------------------------
// Programmer : Dvir Twito
// Student No : 324270883
// Date       : 08.09.2019
//---------------------------------------------------------------------------------
void main(void)
{
	// Variables defenition
	short firstTimeHours;
	short firstTimeMinutes;
	short firstTimeSeconds;
	short secondTimeHours;
	short secondTimeMinutes;
	short secondTimeSeconds;
	short differenceTimeHours;
	short differenceTimeMinutes;
	short differenceTimeSeconds;
	int firstTimeInSeconds;
	int secondTimeInSeconds;
	int differenceTimeInSeconds;
	int temp;

	// Get the first time
	printf("Enter the first time, in format HH:MM:SS\n");
	scanf("%hd:%hd:%hd", &firstTimeHours, &firstTimeMinutes, &firstTimeSeconds);

	// Get the second time
	printf("Enter the second time, in format HH:MM:SS\n");
	scanf("%hd:%hd:%hd", &secondTimeHours, &secondTimeMinutes, &secondTimeSeconds);

	// Convert both of the times to seconds, and calculate the difference
	firstTimeInSeconds = ((int)firstTimeHours) * SECONDS_IN_HOUR +
						 ((int)firstTimeMinutes) * SECONDS_IN_MINUTE +
						 (int)firstTimeSeconds;
	secondTimeInSeconds = ((int)secondTimeHours) * SECONDS_IN_HOUR +
						  ((int)secondTimeMinutes) * SECONDS_IN_MINUTE +
						  (int)secondTimeSeconds;

	differenceTimeInSeconds = firstTimeInSeconds - secondTimeInSeconds;

	// Get the absolute value
	differenceTimeInSeconds -= (differenceTimeInSeconds < ZERO) *
							   TWO *
							   differenceTimeInSeconds;

	// Convert the difference to hours, minutes and seconds, and print the result
	temp = differenceTimeInSeconds;
	differenceTimeHours = temp / SECONDS_IN_HOUR;

	temp -= differenceTimeHours * SECONDS_IN_HOUR;
	differenceTimeMinutes = temp / SECONDS_IN_MINUTE;

	temp -= differenceTimeMinutes * SECONDS_IN_MINUTE;
	differenceTimeSeconds = temp;

	printf("%02hd:%02hd:%02hd",
		   differenceTimeHours,
		   differenceTimeMinutes,
		   differenceTimeSeconds);
}