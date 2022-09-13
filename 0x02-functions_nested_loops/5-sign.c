#include "main.h"

/**
 * print_sign - prints the sign of the number
 * @c: number being tested
 *
 * Description: accepts input and checks if the input is positive or negative
 * Return: 1 for positive, 0 for 0, -1 for negative
 */
int print_sign(int c)
{
	if (c > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (c == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (c < 0)
	{
		_putchar('-');
		return (-1);
	}
	return (0);
}
