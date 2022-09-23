#include "main.h"

/**
 * leet - encodes a string
 * @c: string to be encoded
 * Return: encoded string
 */
char *leet(char *c)
{
	int a = 0, b = 0, l = 5;
	char r[5] = {'A', 'E', 'O', 'T', 'L'};
	char n[5] = {'4', '3', '0', '7', '1'};

	while (c[a])
	{
		b = 0;
		while (b < 1)
		{
			if (c[a] == r[b] || c[a] - 32 == r[b])
			{
				c[a] = n[b]
			}
			b++;
		}
		a++
	}
	return (c);
}
