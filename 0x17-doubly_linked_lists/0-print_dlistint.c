#include "lists.h"

/*
 * print_dlistint - print linked list
 * @h: head
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	int count = 0;

	if (h->next)
	{
		for (count = 0; h->next != NULL; count++)
		{
			printf("%d\n", h->n);
			h = h->next;
		}
	}
	if (h->prev)
	{
		for (count++; h->prev != NULL;)
		{
			printf("%d\n", h->n);
			h = h->prev;
		}
	}
	return (count);
}
