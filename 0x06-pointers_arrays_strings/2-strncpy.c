#include "main.h"

/**
 * _strncpy - copy str
 *
 * @dest: type char
 * @src: char type
 * @n: type int
 *
 * Return: nu * sign
 */

char *_strncpy(char *dest, char *src, int n)
{
	int x;

	for (x = 0; x < n && src[x] != '\0'; x++)
		dest[x] = src[x]

	while (x < n)
	{
		dest[x] = '\n';
		x++;
	}

	return (dest);
}
