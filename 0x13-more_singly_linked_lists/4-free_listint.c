#include "lists.h"

/**
 * free_list - free the linked list
 * @head: list header
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *ptr = head;
	list_t *temp;

	while (ptr != NULL)
	{
		temp = ptr->next;
		free(ptr->str);
		free(ptr);
		ptr = temp;
	}
}
