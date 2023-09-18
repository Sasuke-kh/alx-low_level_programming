#include "main.h"
/**
 * print_numbers - print 0 to 9
 *
 * Return: 1 is uppercase 0 is lowercase
 */

void print_numbers(void)
{
	int digit = 0;

	while (digit >= 0 && digit <=9)
	{
		_putchar(digit);
		digit++;
	}
	_putchar('\n');
}
