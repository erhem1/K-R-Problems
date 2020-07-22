#include <stdio.h>

int main(void)
{
	float fahr, celsius;
	int lower, upper, step;

	lower = 0;
	upper= 300;
	step = 20;
	for(fahr = lower; fahr<=upper; fahr+=step)
	{
		celsius = (fahr-32.0) * (5.0/9.0);
		printf("Fahrenheit: %3.1f Celsius: %6.1f\n", fahr, celsius);
	}
}
