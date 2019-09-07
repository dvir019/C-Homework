// 1_2.c

#include <stdio.h>

#define TEN 10
#define HUNDRED 100

void main(void)
{
	// Variables defenition
	unsigned short number;
	unsigned short reversedNumber;
	unsigned short temp;

	printf("Enter a three digits number: ");
	scanf("%hu", &number);

	temp = number;
	reversedNumber = temp % TEN;
	temp /= TEN;

	reversedNumber = reversedNumber * TEN + temp % TEN;
	temp /= TEN;

	reversedNumber = reversedNumber * TEN + temp % TEN;

	printf("\nThe reversed number is %hu", reversedNumber);
}

// If it was a four-digit number, I would repeat the process one more time:
// temp /= TEN;
// reversedNumber = reversedNumber * TEN + temp % TEN;