// 4_1_1.c
#include <stdio.h>

#define PLUS_OPERATOR '+'
#define MINUS_OPERATOR '-'
#define MULTIPLY_OPERATOR '*'
#define DIVIDIE_OPERATOR '/'
#define BOOLEAN unsigned short
#define TRUE 1
#define FALSE 0

void main(void)
{
	// Variables defenition
	float firstNumber;
	float secondNumber;
	char operator;
	float result;
	BOOLEAN isOperatorValid;

	printf("Enter the first number: ");
	scanf("%f", &firstNumber);

	printf("Enter the operator: ");
	scanf("    %c", &operator);

	printf("Enter the second number: ");
	scanf("%f", &secondNumber);

	isOperatorValid = TRUE;

	switch (operator)
	{
	case PLUS_OPERATOR:
		result = firstNumber + secondNumber;
		break;
	case MINUS_OPERATOR:
		result = firstNumber - secondNumber;
		break;
	case MULTIPLY_OPERATOR:
		result = firstNumber * secondNumber;
		break;
	case DIVIDIE_OPERATOR:
		result = firstNumber / secondNumber;
		break;

	default:
		isOperatorValid = FALSE;
		break;
	}
	if (isOperatorValid)
	{
		printf("\nThe result is %f", result);
	}
	else
	{
		printf("\nThe operator is not valid.");
	}
	// int a, b, c;
	// printf("\n\n");
	// scanf("%02d%02d%04d", &a, &b, &c);
	// printf("%d\n", a);
	// printf("%d\n", b);
	// printf("%d\n", c);
}