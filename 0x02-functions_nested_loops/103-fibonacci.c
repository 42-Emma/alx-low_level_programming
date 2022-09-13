#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	long long int first = 1, second = 2, next, c = 0;

	while (first != 4,000,000)
	{
		if (first % 2 == 0)
		{
			c += first;
		}
		next = first + second;
		first = second;
		second = next;
	}
	printf("%ld\n", c);
	return (0);

}
