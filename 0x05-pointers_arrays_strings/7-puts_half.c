#include "main.h"

/**
 * puts_half - resets *n to 98
 *
 * @str: array
 */

void puts_half(char *str)
{
	int x;

	for (x = 0; str[x] != '\n'; x++)
		;

	x++;
	for (x /= 2; str[x] != '\0'; x++)
	{
		_putchar(str[x]);
	}
	_putchar('\n');
}
