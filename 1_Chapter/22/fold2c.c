#include <stdio.h>
#include <stdbool.h>
#define LIMIT 100
#define FOLD 8
int main(void)
{
	char line[LIMIT];
	int c; 
	int len;
	do
	{
		for(len = 0; len < LIMIT-1 && (c=getchar()) != EOF && c != '\n'; len++)
		{
			line[len] = c;
		}	
		if(c == '\n')
		{
			line[len] = '\n';
			len++;
		}
		line[len] = '\0';
		for(int interval = 1; interval <= len/FOLD ; interval++)
		{
			for(int i = FOLD*interval; i > FOLD*(interval-1); i--)
			{
				bool detect = false;
				switch(line[i])
				{
					case '\n':
					case  ' ':
					case '\t':
						line[i] = '\n';
						detect = true;
				}	
				if(detect == true) break;
				if(i == FOLD*(interval-1) + 1) 
				{
					line[FOLD*interval - 1] = '\n';
				}
			}
		}
		printf("%s", line);
	}while(len > 0);
	return 0;
}
