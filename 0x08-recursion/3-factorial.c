#include "main.h"

/**
 * factorial - determines the factorial of a number
 * @n: number to determine factorial
 * Return: factorial of number
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n <= 1)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
