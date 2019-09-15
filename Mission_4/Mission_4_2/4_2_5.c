// 4_2_5.c

#define ONE 1
#define TWO 2

#define ABS(number) ((number) * ((TWO * number + ONE) % TWO))

void main(void)
{
	// Variables defenition
	int firstNumber;
	int secondNumber;
	int absDifference;
	int max;

	firstNumber = 5;
	secondNumber = 8;

	absDifference = firstNumber - secondNumber;
	absDifference = ABS(absDifference);

	max = (firstNumber + secondNumber + absDifference) / TWO;
}