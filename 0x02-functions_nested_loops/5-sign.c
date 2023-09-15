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
		_purchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
