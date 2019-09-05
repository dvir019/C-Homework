// 1_2.c

#include <stdio.h>

#define NUMBER_OF_SEATS_REQUEST "Enter the number of seats in a taxi: "
#define NUMBER_OF_PASSENGERS_REQUEST "Enter the number of passengers in" \
									 "the station: "
#define NUMBER_OF_TAXIES_AND_PASSENGERS_ANSWER "\nIt will require %hu taxies," \
											   "and %hu will stay in the station."
#define NUMBER_PLACEHOLDER "%hu"
#define NUMBER_OF_TAXIES (usNumberOfPassengers / usNumberOfSeats)
#define NUMBER_OF_PASSENGERS (usNumberOfPassengers % usNumberOfSeats)

//---------------------------------------------------------------------------------
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
//---------------------------------------------------------------------------------
// Programmer : Dvir Twito
// Student No : 324270883
// Date       : 04.09.2019
//---------------------------------------------------------------------------------
void main(void)
{
	// Variables defenition
	unsigned short usNumberOfPassengers;
	unsigned short usNumberOfSeats;

	// Get the number of passangers
	printf(NUMBER_OF_PASSENGERS_REQUEST);
	scanf(NUMBER_PLACEHOLDER, &usNumberOfPassengers);

	// Get the number of seats in a taxi
	printf(NUMBER_OF_SEATS_REQUEST);
	scanf(NUMBER_PLACEHOLDER, &usNumberOfSeats);

	// Print the answers
	printf(NUMBER_OF_TAXIES_AND_PASSENGERS_ANSWER,
		   NUMBER_OF_TAXIES,
		   NUMBER_OF_PASSENGERS);
}
