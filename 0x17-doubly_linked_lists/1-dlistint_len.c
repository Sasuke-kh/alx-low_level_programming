#include "lists.h"

/**
 * dlistint_len - print linked list
 * @h: head
 * Return: number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;
	dlistint_t *current = (dlistint_t *)h;

	while (current != NULL)
	{
		current = current->next;
		count++;
	}
	return (count);
}
