#include <stdio.h>

/**
 * main - prints the largest prime factor of a number
 * Return: Always 0
 */
int main(void)
{
	long int i;
	long int prime_num;
	long int max_fact;

	i = 612852475143;
	prime_num = 2;

	while (i != 0)
	{
		if (i % prime_num != 0)
		{
			prime_num += 1;
		}
		else
		{
			max_fact = i;
			i = i / prime_num;
			if (i == 1)
			{
				printf("%ld is the largest prime factor\n", max_fact);
				break;
			}
		}
	}
	return (0);
}
