#include <stdio.h>

/**
 * main - entry point
 *
 * Description: prints "a...z"
 *
 * Return: 0 (success)
 */

	int main(void)
{
	for (char x = 'a' ; x <= 'z';)
	{
		putchar(x);
		x++;
	}
	putchar('/n')

	return (0);
}
