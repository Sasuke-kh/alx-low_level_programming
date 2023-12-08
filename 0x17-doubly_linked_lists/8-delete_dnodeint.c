#include "lists.h"

/**
 * delete_dnodeint_at_index - delete node at index
 * @head: list header
 * @index: node index
 * Return: 1 success, -1 faill
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current;
	unsigned int count = 0;

	if (head == NULL || *head == NULL)
		return (-1);

	current = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(current);
		return (1);
	}

	while (current != NULL && count < index)
	{
		current = current->next;
		count++;
	}

		if (current == NULL)
		return (-1);

	current->prev->next = current->next;
	if (current->next != NULL)
		current->next->prev = current->prev;

	free(current);

	return (1);
}
