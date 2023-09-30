#include <stdio.h>

/**
 * _sqrt_recursive - Helper function to calculate the square root recursively.
 * @n: The number for which to find the square root.
 * @guess: The current guess for the square root.
 *
 * Return: The square root if found, -1 if
 * the number doesn't have a natural square root.
 */
int _sqrt_recursive(int n, int guess)
{
	if (guess * guess == n)
		return (guess);
	else if (guess * guess > n)
		return (-1);
	else
		return (_sqrt_recursive(n, guess + 1));
}

/**
 * _sqrt_recursion - Calculates the square root of a number using recursion.
 * @n: The number for which to find the square root.
 *
 * Return: The square root if found, -1 if the number
 * doesn't have a natural square root.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (_sqrt_recursive(n, 0));
}
