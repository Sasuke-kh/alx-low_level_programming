#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: all possible combinations of
 * single-digit numbers
 *
 * Return: Always 0 (success)
*/

int main(void)
{
	int x = 48;

	while (x <= 57)
	{
		putchar(x);
		if (x != 57)
		{
			putchar(44);
			putchar(' ');
		}

		x++;
	}
	putchar('\n');

	return (0);
}
