// 1_4.c

#include <stdio.h>

#define DAYS_OF_WATERING (365 / 3)
#define GARDEN_AREA_REQUEST "Enter the area of the garden: "
#define CUBIC_METER_PRICE_REQUEST "Enter the price of cubic meter of water: "
#define WATER_CONSUMPTION_REQUEST "Enter the water consumption per cubic meter: "
#define TOTAL_PRICE_ANSWER "\nWatering your garden costs %f dollars per year.\n"
#define NUMBER_PLACEHOLDER "%f"

//-----------------------------------------------------------------------------
//                              Garden Watering
//                              ---------------
//
// General : Calculates the price of watering a garden.
//
// Input   : The area of the garden, the price of one cubic meter of water,
//			 and the water consumption per cubic meter.
//
// Process : Multuply the three numbers and the number of watering days.
//
// Output  : Print the total price of one year of watering the garden.
//
//-----------------------------------------------------------------------------
// Programmer : Dvir Twito
// Student No : 
// Date       : 04.09.2019
//-----------------------------------------------------------------------------
void main(void)
{
	// Variables defenition
	float fGardenArea;
	float fCubicMeterPrice;
	float fWaterConsumption;

	// Get the number of area of the garden
	printf(GARDEN_AREA_REQUEST);
	scanf(NUMBER_PLACEHOLDER, &fGardenArea);

	// Get the price of cubic meter of water
	printf(CUBIC_METER_PRICE_REQUEST);
	scanf(NUMBER_PLACEHOLDER, &fCubicMeterPrice);

	// Get the water consumption per cubic meter
	printf(WATER_CONSUMPTION_REQUEST);
	scanf(NUMBER_PLACEHOLDER, &fWaterConsumption);

	// Print the total price
	printf(TOTAL_PRICE_ANSWER, fGardenArea * fCubicMeterPrice * fWaterConsumption * DAYS_OF_WATERING);
}