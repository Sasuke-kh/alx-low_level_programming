#include "main.h"
/**
 * int _isalpha(int c) - entry point
 *
 * Description: print _putchar
 *
 * Return: 0 (success)
 */
int _isalpha(int c)
{

	if (c >= 97 && c <= 122)
		return (1);
	else if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
