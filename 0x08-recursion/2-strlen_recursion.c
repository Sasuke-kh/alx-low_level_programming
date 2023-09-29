#include "main.h"

/**
 * _strlen_recursion - prints a given string length
 * @s: the string to be printed
 * Return: x = length
 */

int _strlen_recursion(char *s)
{

	int x = 0;

	if (*s > '\0')
	{
		x = (_strlen_recursion(s + 1) + 1);
	}

	return (x);
}
