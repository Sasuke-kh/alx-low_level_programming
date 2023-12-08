#include "lists.h"

/**
 * get_dnodeint_at_index - gets node at index
 * @head: list header
 * @index: node index
 * Return: node or NULL if it dose not exit
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	unsigned int count = 0;

	while (current != NULL)
	{
		if (count == index)
			return (current);
		current = current->next;
		count++;
	}

	return (NULL);
}
