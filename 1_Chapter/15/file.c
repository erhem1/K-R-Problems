#include <stdio.h>

float cels_to_fahr(int cels)
{
	float fahr = (cels * 9.0/5.0) + 32.0;
	return fahr;
}

int main(void)
{
	int lower = 0;
	int upper = 300;
	int step = 20;
	for(int celsius = lower; celsius <= upper ; celsius += step)
	{
		printf("Celsius: %3d , Fahrenheit: %6.1f \n", celsius, cels_to_fahr(celsius));
	}
}
