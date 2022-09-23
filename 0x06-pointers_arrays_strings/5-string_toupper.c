#include "main.h"

/**
 * string_toupper - changes lowercase of a string to uppercase
 * @c: input
 * Return: c
 */
char string_toupper(char *c)
{
	int x;

	x = 0;
	while (c[x] != '\0')
	{
		if (c[x] >= 'a' && c[x] <= 'z')
		{
			c[x] = c[x] - 'a' + 'A';
		}
		x++;
	}
	return (c);
}
