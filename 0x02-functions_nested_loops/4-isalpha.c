#include "main.h"

/**
 * isalpha - determines if character is an alphabet
 * @c: letter being tested
 *
 * Description: 'accepts an input and checks if it is an alphabet'
 * Return: 1 for success, 0 for failure
 */
int _isalpha(int c)
{
	if ((c > 64 && c <= 90) || (c > 96 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
