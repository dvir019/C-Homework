// Macros.c

#define MAX(firstNumber, secondNumber) \
	(((firstNumber) > (secondNumber)) ? (firstNumber) : (secondNumber))

#define MIN(firstNumber, secondNumber) \
	(((firstNumber) < (secondNumber)) ? (firstNumber) : (secondNumber))

#define SWAP(firstNumber, secondNumber)        \
	firstNumber = firstNumber + secondNumber;  \
	secondNumber = firstNumber - secondNumber; \
	firstNumber = firstNumber - secondNumber;
