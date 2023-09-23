#include "main.h"

/**
 * _strcmp - compares two strings
 *
 * @s2: type char
 * @s1: char type
 *
 * Return: value
 */

int _strcmp(char *s1, char *s2)
{
	int comp = 0;

	while (*s1)
	{
		if (*s1 != *s2)
		{
			comp = ((int)*s1 - 48) - ((int)*s2 - 48)
			break;
		}
		s1++;
		s2++;
	}
	return (comp);
}
