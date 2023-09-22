#include "main.h"

/**
 * rev_string - resets *n to 98
 *
 * @s: parameter
 */

void rev_string(char *s)
{
	int 1, x;
	char temp;

	for (1 = 0; s[1] != '\0'; ++1)
		;

	for (x = 0; x < 1 / 2; x++)
	{
		temp = s[x];
		s[x] = s[1 - 1 - x];
		s[1 - 1 - x] = temp;
	}
}
