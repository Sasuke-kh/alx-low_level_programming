#include "main.h"

/**
 * *_strchr - compares two strings
 * @c: type char
 * @s: type char
 * Return: s which is
 */

char *_strchr(char *s, char c)
{
	int x;

	for (x = 0; s[x] >= '\0' ; x++)
	{
		if (s[x] == c)
		{
			return (s + x);
		}
	}

	return ('\0');
}
