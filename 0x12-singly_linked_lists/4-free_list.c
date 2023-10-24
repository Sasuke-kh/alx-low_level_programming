#include "lists.h"

/**
 * free_list - free the linked list
 * @head: list header
 * Return: void
 */

void free_list(list_t *head)
{

	while(head)
	{
		free(head);
		head = head->next;
	}
}
