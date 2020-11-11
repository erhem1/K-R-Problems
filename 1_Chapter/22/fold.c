#include <stdio.h>
enum limit {LIMIT = 1000, LLIM = 500};
int main(void)
{
	char line[LIMIT];
	int len;
	int c;
	do 
	{
		for(len = 0; len < LIMIT-1 && (c = getchar()) != EOF && c != '\n' ; len++ )
		{
			line[len] = c;
			if(len > LLIM && (c == ' ' || c == '\t'))
			{
				line[len]++;
				line[len] = '\0'; 
				printf("%s", line);
				while(len >= 0)
				{
					line[len] = '\0';
					len--;
				}
			}
		}
		if(c == '\n')
		{
			line[len] = '\n';
			len++;
		}
		line[len] = '\0';
		printf("%s", line);	
	} while(len >0);
	return 0;
}

