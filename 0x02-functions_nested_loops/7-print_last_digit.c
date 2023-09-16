#include "main.h"
/**
 * print_last_digit(int) - entry point
 *
 * Description: print _putchar
 *
 * Return: 0 (success)
 */

int print_last_digit(int n)
{
	int ld;

	if (n < 0)
		ld = -1 * (n % 10);
	else
		ld = n % 10;

	_putchar(ld + '0');
	return (ld);
}
