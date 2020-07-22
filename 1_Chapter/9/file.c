#include <stdio.h>

int main(void)
{
	int c;
	int blank = 0;
	while((c = getchar()) != EOF)
	{
		switch(c)
		{
			case '\t':
			case ' ': 
				if(blank == 1) break;
				 printf(" "); 
				 blank++;
				 break;
			default: printf("%c",c);
				 blank = 0;
		}
	}
	return 0;
}
