#include "main.h"

/**
 * *_strpbrk - compares two strings
 * @accept: type char
 * @s: type char
 * Return: s which is
 */

char *_strpbrk(char *s, char *accept)
{
	int x, y;
	char *z;

	x = 0
	while (s[x] != '\0')
	{
		y = 0;
		while (accept[y] != '\0')
		{
			if (accept[y] == s[x])
			{
				z = &s[x];
				return (z);
			}
			y++;
		}
		x++;
	}

	return (0);
}
