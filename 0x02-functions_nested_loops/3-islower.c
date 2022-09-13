#include "main.h"

/**
 * islower - determines if input is a lowercase letter
 *
 * Return: 1 for success, 0 for failure
 */
int _islower(int c)
{
	if (c > 96 || c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
