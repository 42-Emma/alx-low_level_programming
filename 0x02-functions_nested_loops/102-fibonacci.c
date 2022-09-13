#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	long int first = 1, second = 2, next, c;

	for (c = 1; c <= 50; ++c)
	{
		if (first != 20365011074)
		{
			printf("%ld, ", first);
		}
		else
		{
			printf("%ld\n", first);
		}
		next = first + second;
		first = second;
		second = next;
	}
	return (0);
}
