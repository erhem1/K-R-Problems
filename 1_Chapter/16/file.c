#include <stdio.h>
#include "file.h"
enum constants { LIMIT = 1000, LIMIT_ADDITION = 500};

int main(void)
{
	char current_line[LIMIT];
	char longest_line[LIMIT];
	int current_length;
	int max = 0;
	while((current_length = getlines(current_line)) > 0)
	{
		if(current_length == LIMIT && current_line[LIMIT] != '\0')
		{
		//	char current_line
		}
			
		if(current_length > max)
		{
			max = current_length;
			copyline(current_line, longest_line);	
		}
	}
	if(max > 0)
	{
		printf("%s", longest_line);
		printf("Length : %d \n", max);
	}
	return 0;
}

int getlines(char line[])
{
	int c;
	int i = 0;
	int flexible_limit = LIMIT;
	while(i != flexible_limit)
	{
		while(i < flexible_limit-1 && (c = getchar()) != EOF && c != '\n')
		{
			line[i] = c;
			i++;
		}

		if(c == EOF)
		{
			return 0;
		}
		else if(i == (flexible_limit - 1) && c != '\n')
		{
			flexible_limit += LIMIT_ADDITION;
		}
		else if(c == '\n')
		{
			line[i] = '\n';
			i++;
			line[i] = '\0';
			return i;
		}
	}
}

void copyline(char from[] , char to[])
{
	int i;
	for(i = 0; from[i] != '\0'; i++)
	{
		to[i] = from[i];
	}
	to[i] = '\0';
}

