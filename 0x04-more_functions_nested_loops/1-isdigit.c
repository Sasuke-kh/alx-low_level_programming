#include "main.h"
/**
 * _isdigit - Returns 1 if c is uppercase
 *          Returns 0 otherwise
 *
 * @c: alphabet
 *
 * Return: 1 is uppercase 0 is lowercase
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	return (1);
	else
	return (0);
}
