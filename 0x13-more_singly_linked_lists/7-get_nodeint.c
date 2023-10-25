#include "lists.h"

/**
 * get_nodeint_at_index - get node at the index
 * @head: node header
 * @index: givn index
 * Return: node address
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int counter = 0;

	while (counter < index)
	{
		if (head == NULL)
			return (NULL);

		head = head->next;
		counter++;
	}
	return (head);
}
