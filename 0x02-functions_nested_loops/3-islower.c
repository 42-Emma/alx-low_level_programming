#include "main.h"

/**
 * _islower - determines if character is lowercase
 * @c: letter to be tested
 * Return: 1 or 0
 */
int _islower(int c)
{
	if (c > 96 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
