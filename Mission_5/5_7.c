// 5_7.c

#include <stdio.h>
#include "../Utils/Macros.c"

#define ZERO 0

//---------------------------------------------------------------------------------
//                                 Tiles and Lines
//                                 ---------------
//
// General : Calculates the smallest amount of tiles required to fill up a certain
//			 line.
//
// Input   : The length of the line and the sizes of the tiles.
//
// Process : Find out the amount of the bigger tile, and fill the rest with the
//			 smaller tile if it fits.
//
// Output  : The smallest amount of tiles required to fill up the line.
//
//---------------------------------------------------------------------------------
// Programmer : Dvir Twito
// Student No : 324270883
// Date       : 22.09.2019
//---------------------------------------------------------------------------------
void main(void)
{
	// Variables defenition
	unsigned short tileA;
	unsigned short tileB;
	unsigned short line;
	unsigned short constructedLine;
	unsigned short tileAAmount;
	unsigned short tileBAmount;

	//Get the length of the line
	printf("Enter the length of the line: ");
	scanf("%hu", &line);

	// get the length of the bigger tile
	printf("Enter the length of the bigger tile: ");
	scanf("%hu", &tileB);

	// get the length of the smaller tile
	printf("Enter the length of the smaller tile: ");
	scanf("%hu", &tileA);

	// Calculate the amount of tile B
	tileBAmount = line / tileB;
	constructedLine = tileBAmount * tileB;

	// Calculate the amount of tile A
	while (constructedLine != line)
	{
		// Can enter perfectly tiles of type A
		if (ABS(constructedLine - line) % tileA == ZERO)
		{
			tileAAmount++;
			constructedLine += tileA;
		}
		// Cannot enter perfectly tiles of type A
		else
		{
			tileBAmount--;
			constructedLine -= tileB;
		}
	}

	// Print the result
	printf("\nIt will take %hu tiles of type A and %hu tiles of type B",
		   tileAAmount,
		   tileBAmount);
}