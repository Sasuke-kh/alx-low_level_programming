#include "lists.h"

/**
 * free_list - free the linked list
 * @head: list header
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *temp;
	list_t *ptr = head;

	while(ptr != NULL)
	{
		temp = ptr->next;
		free(ptr);
		ptr = temp;
	}
	head = NULL;
}
