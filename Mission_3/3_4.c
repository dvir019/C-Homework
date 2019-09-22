// 3_4.c

#include <stdio.h>
#include "../Utils/Macros.c"

#define MAX_POINTS 150
#define MIN_POINTS 40
#define MAX_DIFFERENCE 60
#define TRUE 1
#define FALSE 0
#define BOOL unsigned short

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
// Date       : 12.09.2019
//---------------------------------------------------------------------------------
void main(void)
{
	// Variables defenition
	unsigned short firstScore;
	unsigned short secondScore;
	unsigned short winnerScore;
	unsigned short loserScore;
	BOOL isScorePossible;

	// Get the first score
	printf("Enter the first score: ");
	scanf("%hu", &firstScore);

	// Get the second score
	printf("Enter the second score: ");
	scanf("%hu", &secondScore);

	// Set the scores of the winning and the losing team
	winnerScore = MAX(firstScore, secondScore);
	loserScore = firstScore + secondScore - winnerScore;

	// Check for all the conditions, and print the result
	isScorePossible = TRUE;

	isScorePossible *= (winnerScore == loserScore) ? FALSE : TRUE;

	isScorePossible *= (winnerScore > MAX_POINTS) ? FALSE : TRUE;

	isScorePossible *= (loserScore < MIN_POINTS) ? FALSE : TRUE;

	isScorePossible *= (winnerScore - loserScore > MAX_DIFFERENCE) ? FALSE : TRUE;

	isScorePossible ? (printf("Those scores are valid.")) : 
					  (printf("Those scores are not valid."));
}