#include <stdio.h>
enum limit { LIMIT = 1000};
int getlines(char line[]);

int main(void)
{
	char line[LIMIT];
	int length;
	while((length = getlines(line)) > 0)
	{
		if(length > 80)
		{
			printf("%s", line);
		}
	}
	return 0;
}

int getlines(char line[]) 
{
	int i;
	int c;
	for(i = 0; i < LIMIT-1  && (c = getchar()) != EOF && c != '\n' ; i++)
	{
		line[i] = c;
	}
	if(c == '\n')
	{
		line[i] = '\n';
		i++;
	}
	line[i] = '\0';
	return i;
}
