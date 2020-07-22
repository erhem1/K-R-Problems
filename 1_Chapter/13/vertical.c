#include <stdio.h>
enum state { OUT, IN };

int main(void)
{
	int word_length_counter = 0;
	int word_length[30] = {0};
	int longest_length; 

	int state = OUT;
	int c;
	//Gathering sizes of the words	
	while((c = getchar()) != EOF)
	{
		if(c != ' ' && c != '\t' && c != '\n')
		{
			word_length_counter++;
			state = IN;
		} 	
		else if(state = IN)
		{
			word_length[word_length_counter]++;
			word_length_counter = 0;
			state = OUT;
		}
	}
	// Finding the longest length
	longest_length = word_length[1];
	for(int i = 2; i < 30; i++)
	{
		if(word_length[i] > longest_length)
		{
			longest_length = word_length[i];
		}
	}
	// Printing the vertical histogram
	for(int i = 1; i < 30 ; i++)
	{
		printf("%d. ", i);
	}
	putchar('\n');

	for(int i = 1; i <= longest_length ; i++)
	{
		for(int j = 1; j < 30 ; j++)
		{
			if(word_length[j] >= i)
			{
				printf("|  ");
			}
			else
			{
				printf("   ");
			}
		}
		putchar('\n');
	}
}
