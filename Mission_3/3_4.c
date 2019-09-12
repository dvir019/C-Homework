// 3_4.c

#include <stdio.h>
#include "../Macros/Macros.c"

#define MAX_POINTS 150
#define MIN_POINTS 40
#define MAX_DIFFERENCE 60
#define TRUE 1
#define FALSE 0
#define BOOL unsigned short

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

	isScorePossible ? (printf("Those scores are valid.")) : (printf("Those scores are not valid."));
}