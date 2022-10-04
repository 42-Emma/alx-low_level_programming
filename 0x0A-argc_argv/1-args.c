#include <stdio.h>
#include "main.h"

/**
 * main - prints the number of arguments passed in
 * @argc: number of arguments
 * @argv: pointer to array of arguments
 * Return: Always 0
 */
int main(int argc, char __attribute__((unused)) **argv)
{
	printf("%d\n", argc - 1);
	return (0);
}
