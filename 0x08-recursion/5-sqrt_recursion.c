#include "main.h"

/**
 * sqrt_check - checks for squaremroot
 * @n: starting value
 * @c: given number
 * Return: -1 or square root of number
 */
int sqrt_check(int n, int c)
{
	if (n * n == c)
	{
		return (n);
	}
	else if (n * n > c)
	{
		return (-1);
	}
	return (sqrt_check(n + 1, c));
}
/**
 * _sqrt_recursion - determines the squarerrot of a number
 * @n: number to be checked
 * Return: square root of number or -1
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
	{
		return (0);
	}
	return (sqrt_check(1, n));
}
