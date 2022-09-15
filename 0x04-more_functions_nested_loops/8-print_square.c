#include "main.h"

/**
 * print_square - prints square according to a given size
 * @n: integer that determines the size of square
 * Return: void
 */
void print_square(int n)
{
	int i;
	int j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
