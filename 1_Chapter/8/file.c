#include <stdio.h>

int main(void)
{

	int blanks = 0;
	int tabs = 0;
	int newlines = 0;
	int c;
	while((c=getchar()) != EOF)
	{
		switch(c)
		{
			case '\n': newlines++; break;
			case '\t': tabs++; break;
			case ' ': blanks++; break;
		}
	}
	printf("\nBlanks: %3d, Tabs:%9d, Newlines: %15d\n", blanks, tabs, newlines);
	return 0;
}
