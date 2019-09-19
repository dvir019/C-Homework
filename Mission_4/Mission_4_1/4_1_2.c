// 4_1_2.c

#include <stdio.h>
#include "../../Macros/Macros.c"

#define BOOLEAN unsigned short
#define TRUE 1
#define FALSE 0
#define MAX_POINTS 150
#define MIN_POINTS 40
#define MAX_DIFFERENCE 60

//---------------------------------------------------------------------------------
//                                 Basketball Game
//                                 ---------------
//
// General : Checks if the given scores of a basketball game may be real.
//
// Input   : The scores of the game.
//
// Process : Check if the scores fulfill all of the conditions of the study.
//
// Output  : Whether or not those scores may be real.
//
//---------------------------------------------------------------------------------
// Programmer : Dvir Twito
// Student No : 324270883
// Date       : 18.09.2019
//---------------------------------------------------------------------------------
void main(void)
{
	// Variables defenition
	unsigned short firstScore;
	unsigned short secondScore;
	unsigned short winnerScore;
	unsigned short loserScore;
	BOOLEAN isScorePossible;

	// Get the first score
	printf("Enter the first score: ");
	scanf("%hu", &firstScore);

	// Get the second score
	printf("Enter the second score: ");
	scanf("%hu", &secondScore);

	// Set the scores of the winning and the losing team
	winnerScore = MAX(firstScore, secondScore);
	loserScore = firstScore + secondScore - winnerScore;

	// Check for all the conditionsand print the result
	isScorePossible = TRUE;

	if (winnerScore > MAX_POINTS ||
		loserScore < MIN_POINTS ||
		winnerScore == loserScore ||
		winnerScore - loserScore > MAX_DIFFERENCE)
	{
		isScorePossible = FALSE;
	}

	// Print that the scores are valid
	if (isScorePossible)
	{
		printf("\nThose scores are valid.");
	}
	// Print that the scores are not valid
	else
	{
		printf("\nThose scores are not valid.");
	}
}