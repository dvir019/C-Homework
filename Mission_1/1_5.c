// Mission 1, exercise 5

#include <stdio.h>

#define FIRST_NUMBER_REQUEST "Enter the first number: "
#define SECOND_NUMBER_REQUEST "Enter the second number: "
#define THIRD_NUMBER_REQUEST "Enter the third number: "
#define CIRCULAR_SHIFT_ANSWER "\nThe result of the circular shift is: %d %d %d \n"
#define NUMBER_PLACEHOLDER "%d"

void main(void)
{
	int nFirstNumber;
	int nSecondNumber;
	int nThirdNumber;

	printf(FIRST_NUMBER_REQUEST);
	scanf(NUMBER_PLACEHOLDER, &nFirstNumber);

	printf(SECOND_NUMBER_REQUEST);
	scanf(NUMBER_PLACEHOLDER, &nSecondNumber);

	printf(THIRD_NUMBER_REQUEST);
	scanf(NUMBER_PLACEHOLDER, &nThirdNumber);

	printf(CIRCULAR_SHIFT_ANSWER, nThirdNumber, nFirstNumber, nSecondNumber);
}