#include "main.h"

/**
 * rev_string - reverses string
 * @s: string to be tested
 * Return: void
 */
void rev_string(char *s)
{
	int i;
	int x;
	int y;
	int c;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	x = 0;
	y = i - 1;

	while (x < y)
	{
		c = s[x];
		s[x] = s[y];
		s[y] = c;
		x++;
		y--;
	}
}
