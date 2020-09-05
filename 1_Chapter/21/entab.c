#include <stdio.h>
enum limit {LIMIT = 1000, COL = 8};
int entab(char line[], int len);
int main(void)
{
	char line[LIMIT];
	int len;
	int c;
	do 
	{
		for(len = 0; len < LIMIT - 1 && (c = getchar()) != EOF && c != '\n')
		{
			line[len] = c;	
		}
		if(c == '\n')
		{
			line[len] = '\n';
			len++;
		}
		line[len] = '\0';
	} while(len > 0);

	entab(line, len);	
	printf("%s", line);
	return 0;
}

int entab(char line[], int len)
{
	int space_count;
	for(int i = 0; i < len; i++)
	{
		if(line[i] = ' ')
		{
			space_count++;
		}
		
		if(space_count == COL)
		{
			for(int j = i; j <= len ; j++)
			{
				line[j-(COL-1)] = line[j];	
			}
			len -= 7;
		}
	}	
}
