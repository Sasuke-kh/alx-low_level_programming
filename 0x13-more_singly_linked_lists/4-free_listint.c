#include "lists.h"

/**
 * free_listint - free the linked list
 * @head: list header
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *ptr = head;
	listint_t *temp;

	while (ptr != NULL)
	{
		temp = ptr->next;
		free(ptr->n);
		ptr = temp;
	}
}
