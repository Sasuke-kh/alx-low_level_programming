#include "main.h"
#include <stdlib.h>

/**
 * binary_to_uint - converts binary to unsigned int
 * @b: binary string
 * Return: decimal num or 0 if faild
 */
unsigned int binary_to_uint(const char *b)
{
	int count;
	int num;
	unsigned int integer = 0;

	if (b == NULL)
		return (0);

	for (count = 0; b[count] != '\0';)
		count++;

	num = count - 1;
	count = 0;
	while (num >= 0)
	{
		if (b[num] == '1')
			integer += (b[num] - '0') * (1 << count);
		else if (b[num] == '0')
			integer += (b[num] - '0') * (1 << count);
		else
			return (0);
		num--;
		count++;
	}
	return (integer);
}
