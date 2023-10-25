#include "lists.h"

/**
 *
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int counter = 0;

	while (counter < index)
	{
		if(head == NULL)
			return (NULL);
		
		head = head->next;
		counter++;
	}
	return (head);
}
