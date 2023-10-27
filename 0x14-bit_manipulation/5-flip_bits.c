#include "main.h"

/**
 * flip_bits - Calculates the number of flips to get
 * from one number to another.
 * @n: First unsigned long int number.
 * @m: Second unsigned long int number.
 *
 * Return: Number of bits needed to flip.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_result = n ^ m;
	unsigned int count = 0;

	while (xor_result)
	{
		count += xor_result & 1;
		xor_result >>= 1;
	}

	return (count);
}
