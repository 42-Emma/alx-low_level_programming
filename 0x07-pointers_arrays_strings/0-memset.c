#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: poiter to the memory area filled
 * @b: character to fill the memory area with
 * @n: numner of bytes to be filled
 * Return: pointer to the filled memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
