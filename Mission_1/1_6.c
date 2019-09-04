// Mission 1, exercise 6

#include <stdio.h>

#define ADULT_ENTRY_PRICE 50
#define CHILD_ENTRY_PRICE 35
#define NUMBER_OF_ADULTS_REQUEST "Enter the number of adults: "
#define NUMBER_OF_CHILDREN_REQUEST "Enter the number of children: "
#define TOTAL_PROFIT_ANSWER "\nThe pool's profit is: %d \n"
#define NUMBER_PLACEHOLDER "%d"

void main(void)
{
	unsigned short usAdultsNumber;
	unsigned short usChildrenNumber;

	printf(NUMBER_OF_ADULTS_REQUEST);
	scanf(NUMBER_PLACEHOLDER, &usAdultsNumber);

	printf(NUMBER_OF_CHILDREN_REQUEST);
	scanf(NUMBER_PLACEHOLDER, &usChildrenNumber);

	printf(TOTAL_PROFIT_ANSWER, usAdultsNumber * ADULT_ENTRY_PRICE + 
		                        usChildrenNumber * CHILD_ENTRY_PRICE);
}