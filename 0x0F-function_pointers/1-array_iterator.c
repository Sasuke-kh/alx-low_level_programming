#include "function_pointers.h"

/**
 * array_iterator - main function
 * @array: array to executes
 * @size: size of array
 * @action: execute function
 * Retuen: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *ard = array + size - 1;

	if (array && size && action)
		while (array <= ard)
			action(*array++);
}
