#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - delete node with index
 * @head: node header
 * @index: givan index
 * Return: 1 on sucsess and -1 on failiur
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int counter = 0;
	listint_t *prev = NULL, *temp = *head;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = temp->next;
		free(temp);
		return (1);
	}
	while (temp != NULL && counter < index)
	{
		prev = temp;
		temp = temp->next;
		counter++;
	}
	if (temp == NULL)
		return (-1);

	prev->next = temp->next;
	free(temp);
	return (1);
}
