#include <stdio.h>
#include <stdbool.h>
int main(void)
{
	int c = 1;
	printf("%d\n",true);
	printf("%d\n", false);
	while(c != 0)
	{
		printf("%d\n", c = getchar() != EOF);
	}
	return 0; 
}
