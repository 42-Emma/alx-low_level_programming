#include "main.h"
#include <stdio.h>

/**
 * print_array - prints elements of an array of integers
 * @a: array to be tested
 * @n: number of elements of array
 * Return: void
 */
void print_array(int *a, int n)
{
	int len;

	for (len = 0; len < n; len++)
	{
		printf("%d", a[len]);
		if (len != n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
