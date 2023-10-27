#include "main.h"

/**
 * get_bit - get the bit at givan index
 * @n: givan num
 * @index: givan index
 * Return: bit value
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	mask = 1UL << index;
	if ((n & mask) == 0)
		return (0);
	else
		return (1);
}
