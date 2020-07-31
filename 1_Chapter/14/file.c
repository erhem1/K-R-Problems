#include <stdio.h>

int main(void)
{
	int char_set[256] = {0};
	int c;
	// Getting the char set
	while((c = getchar()) != EOF)
	{
		char_set[c]++;
	}
	// Printing
	for(int i = 0; i < 255; i++)
	{
		if(char_set[i] == 0) 
		{
			continue;
		}
		else if(i == ' ')
		{
			printf("Space: ");
		}
		else if(i == '\t')
		{
			printf("Tab: ");
		}
		else if(i == '\n') 
		{
			printf("NewLine: ");
		}
		else
		{
			printf("%c:", i);
		}
		for(int j = 0; j < char_set[i]; j++)
		{
			printf("-");
		}
		printf("\n");
	}
	
}
