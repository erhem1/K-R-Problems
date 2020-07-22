#include <stdio.h>
enum state { OUT , IN};

int main(void)
{
	int state = OUT;
	int c, newline, words, chars;
	c = newline = words = chars  = 0;
	while((c = getchar()) != EOF)
	{
		chars++;
		if(c == '\n') 
			newline++;
		if(c == '\n' || c == ' ' || c == '\t')
			state = OUT;
		else if(state == OUT)
		{
			state = IN;
			words++;
		}
	}
	printf("chars: %d  words: %d  lines:  %d\n", chars, words, newline);
	return 0;
}
