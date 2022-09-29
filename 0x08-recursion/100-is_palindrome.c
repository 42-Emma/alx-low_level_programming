#include "main.h"

/**
 * find_strlen - find length of string
 * @s:string to be measured
 * Return: length of string
 */
int find_strlen(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + find_strlen(s + 1));
	}
}
/**
 * check_palindrome - checks for palindrome
 * @l: left hand index
 * @r: right hand index
 * @p: possible palindrome
 * Return: 1 if palindrome, otherwie 0
 */
int check_palindrome(int l, int r, char *p)
{
	if (l >= r)
	{
		return (1);
	}
	else if (p[l] != p[r])
	{
		return (0);
	}
	else
	{
		return (check_palindrome(l + 1, r - 1, p));
	}
}
/**
 * is_palindrome - executes palindrome checker
 * @s: pointer to string
 * Return: 1 if palindrome, otherwise 0
 */
int is_palindrome(char *s)
{
	int i;

	i = find_strlen(s) - 1;
	return (check_palindrome(0, i, s));
}
