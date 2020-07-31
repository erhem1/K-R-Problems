#include <stdio.h>
enum limit {LIMIT = 1000};

void reverse(char line[], int len);
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
		reverse(line, len);
		printf("%s", line);
	} while(len > 0);
}

void reverse(char line[], int len)
{
	int mid;
	int temp;
	int newLen = len-2;
	if(newLen % 2)
	{
		mid = newLen/2;
	}
	else
	{
		mid = (newLen+1)/2;
	}
	for(int i = 0; i != mid; i++)
	{
		temp = line[i];	
		line[i] = line[newLen-i];
		line[newLen-i] = temp;
	}
}


