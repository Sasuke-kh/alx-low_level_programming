#include "main.h"
/**
 * _isupper - Returns 1 if c is uppercase
 *          Returns 0 otherwise
 *
 * @c: alphabet
 *
 * Return: 1 is uppercase 0 is lowercase
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	return (1);
	else
	return (0);
}
