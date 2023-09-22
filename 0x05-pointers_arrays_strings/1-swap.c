#include "main.h"

/**
 * swap_int - swaps *a *b
 *
 * @a: parameter 1
 * @b: parameter 2
 */

void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
