#include "main.h"

/**
 * print_to_98 - display numbers from given input to 98
 * @n: integer to be tested
 * Return: Always 0
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		for (n =n; n <= 97; n++)
		{
			_putchar(n + '0');
			_putchar(',');
			_putchar(' ');
		}
	}
	else
	{
		for (n = n; n > 98; n--)
		{
			_putchar(n + '0');
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('9');
	_putchar('8');
	_putchar('\n');
}
