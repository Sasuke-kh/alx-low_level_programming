#include "main.h"

/**
 * rev_string - resets *n to 98
 *
 * @s: parameter
 */

void rev_string(char *s)
{
	int l, x;
	char temp;

	for (l = 0; s[l] != '\0'; ++l)
		;

	for (x = 0; x < l / 2; x++)
	{
		temp = s[x];
		s[x] = s[l - 1 - x];
		s[l - 1 - x] = temp;
	}
}
