#include "lists.h"

/*
 * print_dlistint - print linked list
 * @h: head
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	int count = 0;
	dlistint_t* current = (dlistint_t*)h;

	while (current != NULL)
	{
        	printf("%d\n", current->n);
        	current = current->next;
		count++;
	}
	return (count);
}
