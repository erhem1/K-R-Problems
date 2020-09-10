#include <stdio.h>
enum limit {LIMIT = 1000, COL = 8};
int entab(char line[], int len);
int main(void)
{
	char line[LIMIT];
	int len, new_len;
	int c;
	do 
	{
		for(len = 0; len < LIMIT - 1 && (c = getchar()) != EOF && c != '\n'; len++)
		{
			line[len] = c;	
		}
		if(c == '\n')
		{
			line[len] = '\n';
			len++;
		}
		line[len] = '\0';
		printf("%d \n", len);
		new_len = entab(line, len);
		printf("%s", line);
		printf("%d \n", new_len);
	} while(len > 0);
	return 0;
}

int entab(char line[], int len)
{
	int space_count = 0;
	for(int i = 0; i < len; i++)
	{
		if(line[i] == ' ')
		{
			space_count++;
		}
		else
		{
			space_count = 0;
		}
		
		if(space_count == COL)
		{
			for(int j = i; j <= len ; j++)
			{
				line[j-(COL-1)] = line[j];	
			}
			i -= 7;
			len -= 7;
		}
	}	
	return len;
}
