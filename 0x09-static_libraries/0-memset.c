#include "main.h"

/**
 * *_memset - compares two strings
 * @n: unsigned int
 * @b: type char
 * @s: type char
 * Return: s which is
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; n > 0; x++, n--)
	{
		s[x] = b;
	}

	return (s);
}
