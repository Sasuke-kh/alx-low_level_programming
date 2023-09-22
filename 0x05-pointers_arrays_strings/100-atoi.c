#include "main.h"

/**
 * _atoi - resets *n to 98
 *
 * @s: parameter type char
 *
 * Return: nu * sign
 */

int _atoi(char *s)
{
	unsigned int nu = 0;
	int sign = 1;

	do {
		if (*s == '-')
			sign *= -1;
		else if (*s >= '0' && *s <= '9')
			nu = (nu * 10) + (*s - '0');
		else if (nu > 0)
			break;
	} while (*s++);

	return (nu * sign);
}
