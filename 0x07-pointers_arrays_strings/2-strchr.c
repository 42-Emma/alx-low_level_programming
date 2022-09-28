#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: pointer to the string to be tested
 * @c: character to be located
 * Return: pointer to the first occurence of string
 */
char *_strchr(char *s, char c)
{
	unsigned int i;
	
	for (i = 0; *(s + i) != '\0'; i++)
	{
		if (*(s + i) == c)
		{
			return (s + i);
		}
	}
	if (*(s + i) == c)
	{
		return (s + i);
	}
	return ('\0');
}
