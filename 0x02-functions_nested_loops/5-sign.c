#include "main.h"
/**
 * main - entry point
 *
 * Description: print _putchar
 *
 * Return: 0 (success)
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_purchar(+);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(-);
		return (-1);
	}
	else
	{
		_putchar(0);
		return (0);
	}
}
