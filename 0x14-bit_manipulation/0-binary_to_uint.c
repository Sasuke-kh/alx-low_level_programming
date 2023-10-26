#include "main.h"
#include <stdlib.h>

/**
 *
 */

unsigned int binary_to_uint(const char *b)
{
	int count = 0;
	unsigned int num = 0;
	unsigned int num2;
	unsigned int integer = 0;

	if (b == NULL)
		return (0);
	while (b[count] != '\0')
	{
		if (b[count] != '0' || b[count] != '1')
			return (0);
		count++;
	}
	while (count >= 0)
	{
		count--;
		num2 = 1 << num;
		integer += (b[count] - '0') * num2;
		num++;
	}
	return (integer);
}
