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
	char x = 'a';

	while (x <= 'z')
	{
		if (x == 'q' || x == 'e')
			x++;
		putchar(x);
		x++;
	}
	putchar('\n');

	return (0);
}
