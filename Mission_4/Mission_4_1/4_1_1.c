// 4_1_1.c

#include <stdio.h>

#define PLUS_OPERATOR '+'
#define MINUS_OPERATOR '-'
#define MULTIPLY_OPERATOR '*'
#define DIVIDIE_OPERATOR '/'
#define BOOLEAN unsigned short
#define TRUE 1
#define FALSE 0

//---------------------------------------------------------------------------------
//                                Simple Calculator
//                                -----------------
//
// General : Calculates a simple mathematical expressions.
//
// Input   : Two numbers and an operator.
//
// Process : Check the type of the operator, and calculates the result.
//
// Output  : The result of the expression.
//
//---------------------------------------------------------------------------------
// Programmer : Dvir Twito
// Student No : 324270883
// Date       : 15.09.2019
//---------------------------------------------------------------------------------
void main(void)
{
	// Variables defenition
	float firstNumber;
	float secondNumber;
	char operator;
	float result;
	BOOLEAN isOperatorValid;

	// Get the first number
	printf("Enter the first number: ");
	scanf("%f", &firstNumber);

	// Get the operator
	printf("Enter the operator: ");
	scanf("    %c", &operator);

	// Get the second number
	printf("Enter the second number: ");
	scanf("%f", &secondNumber);

	// Calculate the result according to the operator type
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

	// Print the result if the operator is valid
	if (isOperatorValid)
	{
		printf("\nThe result is %f", result);
	}
	// Print error message, because the operator is not valid
	else
	{
		printf("\nThe operator is not valid.");
	}
}