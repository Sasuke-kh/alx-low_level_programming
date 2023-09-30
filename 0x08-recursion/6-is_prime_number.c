#include "main.h"

/**
 * is_prime_number - checks if n is prime
 * @n: input num
 * Return: 1 if n is prime, 0 if n not prime
 */

int is_prime_number(int n)
{
	if (n <= 1 || (n % 2) == 0 || (n % 5) == 0)
		return (0);
	else
		return (1);
}
