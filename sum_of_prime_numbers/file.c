#include <stdio.h>
#define NTH 1000000

int main(void)
{
	int sum = 2 +3; // First two prime numbers	
	int flag;
	int n_primes = 2;
	int list_of_factors[1000];
	list_of_factors[0] = 3;
	int ceiling_of_factors = 1;
	for(int i = 5; n_primes != 10000 ; i+=2)
	{
		flag = 1;
		for(int k = 0; k < ceiling_of_factors; k++)
		{
			if((i % list_of_factors[k]) == 0)
			{
				flag = 0;
				break;
			}
		}
		if(flag == 1)
		{
			for(int j = i-1; j>1; j--)
			{
				if((i % j) == 0)
				{
					flag = 0;
					ceiling_of_factors++;
					list_of_factors[ceiling_of_factors] = j;
					break;
				}
			}
		}
		if(flag == 1)
		{
			sum += i;
			n_primes++;
		}
	}
	printf("%d\n", sum);
}
