#include "main.h"
/**
 * _abs - entry point
 *
 * @n: num
 *
 * Description: print _putchar
 *
 * Return: 0 (success)
 */

int _abs(int n)
{
	if (n > 0)
		n = (-1 * n);
	return (n);
}
