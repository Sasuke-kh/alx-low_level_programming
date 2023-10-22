#include "lists.h"

/**
 * print_list - prints linked list nodes
 * @h: nude header
 * Return: nude count
 */

size_t print_list(const list_t *h)
{
	const list_t *ptr = NULL;
	int count = 0;

	ptr = h;
	while (ptr != NULL)
	{
		ptr = ptr->next;
		count++;
	}
	return (count);
}

