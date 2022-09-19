#include "main.h"

/**
 * print_rev - prints string in reverse
 * @s: string to be printed
 * Return: void
 */
void print_rev(char *s)
{
	int i;
	int c;
	int temp;

	c = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		c++;
	}
	for (temp = (c - 1); temp >= 0; temp--)
	{
		_putchar(s[temp]);
	}
	_putchar('\n');
}
