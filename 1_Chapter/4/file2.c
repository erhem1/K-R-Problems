#include <stdio.h>

int main(void)
{
	float celsius;
	int lower = 0;
	int upper = 300;
	int step = 20;
	celsius = lower;
	printf("Celsius to fahrenheit\n");
	while(celsius  <=upper)
	{
		printf("Celsius: %3.1f \t Fahrenheit: %6.1f \n", celsius, (celsius*9.0/5.0) + 32.0);
		celsius+=step;
	}
	return 0;
}
