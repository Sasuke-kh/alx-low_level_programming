#include "lists.h"
#include <stdlib.h>

/**
 *
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int counter = 1;
	listint_t *newnode;
	listint_t *ptr;

	ptr = *head;
	if (idx == 0)
	{
		newnode = malloc(sizeof(listint_t));
		if (newnode != NULL)
		{
			newnode->n = n;
			newnode->next = ptr->next;
			*head = newnode;
			return (*head);
		}
		else
		{
			free(newnode);
			return (NULL);
		}
	}
	while (counter < idx)
	{
		ptr = ptr->next;
		if (ptr == NULL)
			return (NULL);
		counter++;
	}

	if (ptr != NULL)
	{
		newnode = malloc(sizeof(listint_t));
		if (newnode != NULL)
		{
			newnode->n = n;
			newnode->next = ptr->next;
			ptr->next = newnode;
			return (ptr->next);
		}
		else
		{
			free(newnode);
			return (NULL);
		}
	}
	else
	return (NULL);
}
