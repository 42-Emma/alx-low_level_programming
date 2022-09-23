#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: first string to be concatenated
 * @src: second string to be concatenated
 * Return: concatenated string
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	for (i = 0; dest[i] != '\0'; ++i);
	for (j = 0; src[j] != '\0'; ++j, ++i)
	{
		dest[i] = src[j];
	}
	dest[i] = '\0';
	return (dest);
}
