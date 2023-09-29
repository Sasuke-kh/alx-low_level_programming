#include "main.h"

/**
 * factorial - actorial of num
 * @n: input number
 * Return: -1 if n < 0, 1 if n == 0, !n
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
