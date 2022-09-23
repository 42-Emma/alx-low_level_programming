#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: first input
 * @n: second input
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int x;
	int y;
	int tmp;

	x = 0;
	y = n - 1;

	while (x < y)
	{
		tmp = a[x];
		a[x] = a[y];
		a[y] = tmp;
		x++;
		y--;
	}
}
