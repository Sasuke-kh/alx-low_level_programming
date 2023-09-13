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
	int x = 0;

	while (x < 10)
	{
		printf("%i", x);
		x++;
	}
	printf("\n");
	return (0);
}
