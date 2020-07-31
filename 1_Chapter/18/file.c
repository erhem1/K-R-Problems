#include <stdio.h>
enum limit {LIMIT = 1000};
int rmvTrailing(char s[], int len);

int main(void)
{
	int c;
	int i;
	int newLen;
	char line[1000];
	do
	{
		for(i = 0; i < LIMIT - 1  && (c = getchar()) != EOF && c != '\n'; i++)
		{	
			line[i] = c;
		}
		if(c == '\n')
		{
			line[i] = '\n';
			i++;
		}
		line[i] = '\0';
		newLen = rmvTrailing(line, i);	
		if(newLen > 0)
		{
			printf("%s", line);	
		}
	} while(i != 0);
}

int rmvTrailing(char s[], int len)
{
	int i = len;

	while(i >= 0)
	{
		if(s[i] == '\n' || s[i] == ' ' || s[i] == '\t' || s[i] == '\0')
		{
			i--;
		}
		else
		{
			i++;
			s[i] = '\n';
			s[i+1] = '\0';
			break;
		}	
	}

	return i;
}
