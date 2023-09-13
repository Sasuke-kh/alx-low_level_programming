#include <stdio.h>
/**
 * main - entry point
 *
 * Description: prints all the numbers
 * of base 16 in lowercase.
 *
 * Return: 0 (success)
 */

	int main(void)
{
	char a0 = 48;

	while (a0 <= 102)
	{
	if (a0 == 58)
	{
	a0 += 39;
	}
	putchar(a0);
	a0++;
	}
	putchar('\n');

	return (0);
}
