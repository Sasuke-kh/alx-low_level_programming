#include "main.h"
/**
 * print_most_numbers - print 0 to 9
 *
 * Return: 1 is uppercase 0 is lowercase
 */

void print_most_numbers(void)
{
	int digit = 0;

	while (digit >= 0 && digit <= 9)
	{
		if (digit == 2 || digit == 4)
		{
			digit++;
		}
		_putchar(digit + 48);
		digit++;
	}
	_putchar('\n');
}
