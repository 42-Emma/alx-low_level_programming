#include "main.h"

/**
 * _strncat - concatenates two strings
 * taking the given bytes into consideration
 * @dest: first string
 * @src: second string
 * @n: given bytes
 * Return: pointer to the concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	for (i = 0; dest[i]; i++)
		;
	for (j = 0; j < n && src[j]; i++, j++)
	{
		dest[i] = src[j];
	}
	dest[i + n + 1] = '\0';
	return (dest);
}
