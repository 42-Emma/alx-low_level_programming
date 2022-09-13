#include "main.h"

/**
 * print_times_table - prints times table of given integer
 * @n: integer to be tested
 */
void print_times_table(int n)
{
	int x;
	int y;
	int product;

	if (n >= 0 && n <=15):
	{
		for (x = 0; x <= n; x++)
		{
			for (y = 0; y <= n; y++)
			{
				product = x * y;

				if (y == 0)
				{
					_putchar(product + '0');
				}
				else if (product < 10 && y != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(product + '0');
				}
				else if (product >= 10 && product < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((product / 10) + '0');
					_putchar((product % 10) + '0');
				}
				else if (product >= 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar((k / 100) + '0');
					_putchar(((k / 10) % 10) + '0');
					_putchar((k % 10) + '0');
				}
			}
			_putchar('\n');
		}
	}
}
