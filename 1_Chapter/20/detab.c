#include <stdio.h>
enum limit {LIMIT = 1000, COL = 8 };
void detab(char line[], int len);
int main(void)
{
	char line[LIMIT];
	int c;
	int len;
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
		printf("%d\n", len);
		detab(line, len);
		printf("%s", line);
	} while(len > 0);
	return 0;
}

void detab(char line[], int len)
{
	for(int i = 0; i < len; i++)
	{
		if(line[i] == '\t')
		{
			len += 7;
			for(int j = len; j >= i; j--)
			{
				if((j + (COL - 1)) < LIMIT - 2)
				{
					line[j+(COL-1)] = line[j];
				}
			}
			for(int k = 0; k < COL && (i+k) < LIMIT-1 ; k++)
			{
				line[i+k] = ' ';
			}
		}
	}
	printf("%d\n", len);
}
