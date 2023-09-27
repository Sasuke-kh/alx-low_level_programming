#include "main.h"

/**
 * *_memcpy - compares two strings
 * @n: unsigned int
 * @src: type char
 * @dest: type char
 * Return: dest which is
 */

char *_memcpy(char *dest, char *src, unsigned int n);
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		dest[x] = src[x];
	}
	return (dest);
}
