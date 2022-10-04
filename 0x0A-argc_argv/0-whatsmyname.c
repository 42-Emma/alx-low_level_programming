#include <stdio.h>
#include "main.h"
#define UNUSED(x) (void)(x)

/**
 * main - prints the program name
 * @argc: number of arguements given
 * @argv: pointer to array of arguments
 * Return: Always 0
 */
int main(int argc, char **argv)
{
	UNUSED(argc);
	printf("%s\n", argv[0]);
	return (0);
}
