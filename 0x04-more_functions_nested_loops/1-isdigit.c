#include "main.h"

/**
 * _isdigit - checks for digit from 0 to 9
 * @c: digit to be checked
 * Return: 1 if sucessful, otherwise 0
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
