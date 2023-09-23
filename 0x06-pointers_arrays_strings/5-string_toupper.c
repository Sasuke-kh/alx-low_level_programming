#include "main.h"

/**
 * string_toupper - compares two strings
 *
 * @s2: type char
 * @s1: char type
 *
 * Return: value
 */

char *string_toupper(char *str)
{
	int x;

	for (x = 0; str[x] != '\0'; x++)
	{
		if (str[x] >= 97 && str [x] <= 122)
		{
			str[x] = str [x] - 32;
		}
	}
	return (str);
}
