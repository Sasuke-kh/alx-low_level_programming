#include "main.h"

/**
 * _strncat - resets *n to 98
 *
 * @dest: type char
 * @src: type char
 * @n: type int
 *
 * Return: nu * sign
 */

char *_strncat(char *dest, char *src, int n)
{
	int x, x2;

	x = 0;

	while (dest[x])
		x++;

	for (x2 = 0; x2 < n && src[x2] != '\0'; x2++)

		dest[x + x2] = src[x2];
	dest[x + x2] = '\0';

	return (dest);
}
