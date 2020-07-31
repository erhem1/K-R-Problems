#include <stdio.h>
enum limit {LIMIT = 1000};
void rmvTrailing(char s[], int len);

int main(void)
{
	int c;
	int i;
	char line[1000];
	while(i = 0; i < LIMIT - 1  && (c = getchar()) != EOF && c != '\n'; i++)
	{	
		line[i] = c;
	}
	if(c == '\n')
	{
		line[i] = '\n';
	}
	
}

void rmvTrailing(char s[], int len)
{
	for(int i = len;  i >= 0; i--)
	{
		if(c == '\n' || c == ' ' || c == '\t' || c == '\0')
		{
			continue;
		}
		else
		{
			s[i] = '\0';
			break;
		}	
	}
}
