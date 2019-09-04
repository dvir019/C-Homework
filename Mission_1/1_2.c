// 1_2.c

#include <stdio.h>

#define NUMBER_OF_SEATS_REQUEST "Enter the number of seats in a taxi: "
#define NUMBER_OF_PASSENGERS_REQUEST "Enter the number of passengers in the station: "
#define NUMBER_OF_TAXIES_AND_PASSENGERS_ANSWER "\nIt will require %d taxies, and %d will stay in the station.\n"
#define NUMBER_PLACEHOLDER "%d"

//-----------------------------------------------------------------------------
//                             Taxies Passengers
//                             -----------------
//
// General : Calculates the number of taxies and the remaining passengers.
//
// Input   : The number of passengers and the number of seats in a taxi.
//
// Process : Calculate the quotient and the remainder of the numbers.
//
// Output  : Print the quotient and the remainder.
//
//-----------------------------------------------------------------------------
// Programmer : Dvir Twito
// Student No : 
// Date       : 04.09.2019
//-----------------------------------------------------------------------------
void main(void)
{
	// Variables Defenition
	unsigned short usNumberOfPassengers;
	unsigned short usNumberOfSeats;

	// Get the number of passangers
	printf(NUMBER_OF_PASSENGERS_REQUEST);
	scanf(NUMBER_PLACEHOLDER, &usNumberOfPassengers);

	// Get the number of seats in a taxi
	printf(NUMBER_OF_SEATS_REQUEST);
	scanf(NUMBER_PLACEHOLDER, &usNumberOfSeats);

	// Print the answers
	printf(NUMBER_OF_TAXIES_AND_PASSENGERS_ANSWER, usNumberOfPassengers / usNumberOfSeats, usNumberOfPassengers % usNumberOfSeats);
}
