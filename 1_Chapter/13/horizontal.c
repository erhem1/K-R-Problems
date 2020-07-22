#include <stdio.h>
enum state { OUT, IN};
int main(void)
{
	int word_length_counter = 0;
	int word_lengths[30] = {0};
	int state = OUT;
	int c;

	while((c = getchar()) != EOF)
	{
		if(c != ' ' && c != '\t' && c != '\n')
		{
			word_length_counter++;
			state = IN;
		}
		else if(state == IN)
		{
			word_lengths[word_length_counter]++;
			word_length_counter = 0;
			state = OUT;
		}
	}

	for(int i = 1; i < 30; i++)
	{
		if(word_lengths[i] == 0) continue;
		printf("%d: ", i);
		for(int j = 0; j < word_lengths[i]; j++)
		{
			putchar('-');
		}
		putchar('\n');
	}

	return 0;
}
