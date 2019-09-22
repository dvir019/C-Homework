// 5_4.c

#include <stdio.h>

#define TEN 10

void main(void)
{
	float max;
	float secondMax;
	float number;
	int counter = 0;

	for (counter = TEN; counter; counter--)
	{
		printf("Enter a number: ");
		scanf("%f", &number);

		if (number > max)
		{
			secondMax = max;
			max = number;
		}
	}

	printf("The biggest numbers are %f and %f", max, secondMax);
}