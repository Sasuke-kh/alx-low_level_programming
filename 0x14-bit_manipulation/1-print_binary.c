#include "main.h"

/**
 * print_binary - convert decimal to binary
 * @n: givan decimal
 * Return: void
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	putchar('0' + (n & 1));
}
