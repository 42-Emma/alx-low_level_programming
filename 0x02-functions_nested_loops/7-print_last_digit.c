#include "main.h"

/**
 * print_last_digit - prints out last digit of a number
 * @c: number to be tested
 *
 * Description: accepts a nmber and prints out the last digit of the number
 * Return: Always 0
 */
int print_last_digit(int c)
{
	c = c % 10;

	if (c < 0)
	{
		c = -c;
		_putchar(c + '0');
		return (c);
	}
}
