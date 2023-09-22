#include "main.h"

/**
 * print_rev - revers the string
 *
 * @n: parameter
 */

void print_rev(char *s)
{
	int x = 0;

	while (s[x])
		x++;

	while (x--)
	{
		_putchar(s[x]);
	}
	_putchar('\n');
}
