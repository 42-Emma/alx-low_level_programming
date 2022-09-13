#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int first = 1, second = 2, next, c;

	for (c = 1; c <= 50; c++)
	{
		if (c <= 1)
		{
			next = c;
		}
		else
		{
			next = first + second;
			first = second;
			second = next;
		}
		printf("%d, ", next);
	}
	return (0);
}
