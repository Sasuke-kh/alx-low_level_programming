#include "lists.h"

/**
 * list_len - prints linked list nodes
 * @h: nude header
 * Return: nude count
 */

size_t list_len(const list_t *h)
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

