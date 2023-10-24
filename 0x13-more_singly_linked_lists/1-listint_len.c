#include "lists.h"

/**
 * listint_len - prints linked list nodes
 * @h: nude header
 * Return: nude count
 */

size_t listint_len(const listint_t *h)
{
	const listint_t *ptr = NULL;
	int count = 0;

	ptr = h;
	while (ptr != NULL)
	{
		ptr = ptr->next;
		count++;
	}
	return (count);
}

