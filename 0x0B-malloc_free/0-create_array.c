#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *create_array - task function
 * @size: array size
 * @c: char
 * Return: 0 or n
 */

char *create_array(unsigned int size, char c)
{
	char *n = malloc(size);

	if (size == 0 || n == 0)
		return (0);

	while (size--)
		n[size] = c;

	return (n);
}
