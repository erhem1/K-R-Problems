#include <stdio.h> 

enum state {OUTSIDE_WORD , INSIDE_WORD};
int main(void)
{
	int state = OUTSIDE_WORD;
	int c;
	while((c = getchar()) != EOF)
	{
		if(c != ' ' && c != '\t' && c != '\n')
		{
			state = INSIDE_WORD;
			putchar(c);
		}
		else if(state == INSIDE_WORD)
		{
			state = OUTSIDE_WORD;
			putchar('\n');
		}
	}
	return 0;
}
