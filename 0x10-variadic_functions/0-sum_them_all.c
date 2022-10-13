#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: number of parameters passed into function
 * @...: a variable number of parameters to calculate the sum of
 * Return: 0, if n is 0, otherwise, sum of parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list nums;
	unsigned int i, sum;

	if (n == 0)
		return (0);
	va_start(nums, n);

	sum = 0;

	for (i = 0; i < n; i++)
		sum += va_arg(nums, int);

	va_end(nums);
	return (sum);
}
