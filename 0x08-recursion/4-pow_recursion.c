#include "main.h"

/**
 * _pow_recursion - determines the value of x raised to y
 * @x: first value
 * @y: second value
 * Return: value of x raised to y
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	else if (y < 0)
	{
		return (-1);
	}
	return (x * _pow_recursion(x, y - 1));
}
