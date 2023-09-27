#include "main.h"

/**
 * print_diagsums - compares two strings
 * @size: type int
 * @a: type int
 * Return: s which is
 */

void print_diagsums(int *a, int size)
{
	int x, num1 = 0, num2 = 0;

	for (x = 0; x < size; x++)
	{
		num1 += a[x];
		num2 += a[size - x - 1];
		a += size;
	}
	printf("%d, ", num1);
	printf("%d\n", num2);
}
