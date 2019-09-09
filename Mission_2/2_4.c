// 2_4.c

#define M 10.5
#define T 5.5

//---------------------------------------------------------------------------------
//                             Apples And Bananas Price
//                             ------------------------
//
// General : Calculate the total price of the apples and the bananas.
//
// Input   : None.
//
// Process : Add two multiplies.
//
// Output  : None.
//
//---------------------------------------------------------------------------------
// Programmer : Dvir Twito
// Student No : 324270883
// Date       : 07.09.2019
//---------------------------------------------------------------------------------
void main(void)
{
	// Variables defenition
	float bananasWeight;
	float bananasPricePerKg;
	float totalPrice;

	// Calculate the weight of the bananas and their price per one kilogram
	bananasWeight = M + 2;
	bananasPricePerKg = 2 * T;

	// Calculate the total price
	totalPrice = ((float)M) * T + ((float)bananasWeight) * bananasPricePerKg;
}