#include "main.h"

/**
 * _strlen_recursion - determines the length of a string
 * @s: pointer to string to be calculated
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	int i = 1;

	if (*s != '\0')
	{
		return (i + _strlen_recursion(s + 1));
	}
	else
	{
		return (0);
	}
}
