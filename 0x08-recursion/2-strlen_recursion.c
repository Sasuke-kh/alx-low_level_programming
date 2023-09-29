#include "main.h"

/**
 * _print_rev_recursion - prints a given string in reverse
 * @s: the string to be printed
 */

int _strlen_recursion(char *s)
{

	int x = 0;

	if (*s > '\0')
	{
		x = (_strlen_recursion(char *s)(s + 1) + 1);
	}

	return (x);
}