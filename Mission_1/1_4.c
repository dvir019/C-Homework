// Mission 1, exercise 4

#include <stdio.h>

#define DAYS_OF_WATERING (365 / 3)
#define GARDEN_AREA_REQUEST "Enter the area of the garden: "
#define CUBIC_METER_PRICE_REQUEST "Enter the price of cubic meter of water: "
#define WATER_CONSUMPTION_REQUEST "Enter your water consumption: "
#define TOTAL_PRICE_ANSWER "\nWatering your garden costs %f dollars per year.\n"
#define NUMBER_PLACEHOLDER "%f"

void main(void)
{
	float fGardenArea;
	float fCubicMeterPrice;
	float fWaterConsumption;

	printf(GARDEN_AREA_REQUEST);
	scanf(NUMBER_PLACEHOLDER, &fGardenArea);

	printf(CUBIC_METER_PRICE_REQUEST);
	scanf(NUMBER_PLACEHOLDER, &fCubicMeterPrice);

	printf(WATER_CONSUMPTION_REQUEST);
	scanf(NUMBER_PLACEHOLDER, &fWaterConsumption);

	printf(TOTAL_PRICE_ANSWER, fGardenArea * fCubicMeterPrice * fWaterConsumption * DAYS_OF_WATERING);

	int x; scanf("%d", &x);
}