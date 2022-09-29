#include "main.h"

/**
 * prime_checker - checks for prime number
 * @c: first value
 * @b: second value
 * Return: primecheck
 */
int prime_checker(int c, int b)
{
	if (b == 1)
	{
		return (1);
	}
	else if (c % b == 0)
	{
		return (0);
	}
	else
	{
		return (prime_checker(c, b - 1));
	}
}
/**
 * is_prime_number - executes prime checker
 * @n: input
 * Return: 1 for prime number, otherwise 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else if (prime_checker(n, n / 2) > 0)
	{
		return (1);
	}
}
