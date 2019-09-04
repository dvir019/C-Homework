// Mission 1, exercise 2

#include <stdio.h>

#define NUMBER_OF_SEATS_REQUEST "Enter the number of seats in a taxi: "
#define NUMBER_OF_PASSENGERS_REQUEST "Enter the number of passengers in the station: "
#define NUMBER_OF_TAXIES_AND_PASSENGERS_ANSWER "\nIt will require %d taxies, and %d will stay in the station.\n"
#define NUMBER_PLACEHOLDER "%d"

void main(void)
{
	// Variables Defenition
	unsigned short usNumberOfPassengers;
	unsigned short usNumberOfSeats;

	printf(NUMBER_OF_PASSENGERS_REQUEST);
	scanf(NUMBER_PLACEHOLDER, &usNumberOfPassengers);

	printf(NUMBER_OF_SEATS_REQUEST);
	scanf(NUMBER_PLACEHOLDER, &usNumberOfSeats);

	printf(NUMBER_OF_TAXIES_AND_PASSENGERS_ANSWER, usNumberOfPassengers / usNumberOfSeats, usNumberOfPassengers % usNumberOfSeats);
}
