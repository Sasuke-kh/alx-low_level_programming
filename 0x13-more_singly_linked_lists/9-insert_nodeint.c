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
	while (counter < idx)
	{
		ptr = ptr->next;
		counter++;
	}

	if (ptr->next)
	{
		newnode = malloc(sizeof(listint_t));
		newnode->n = n;
		newnode->next = ptr->next;
		ptr->next = newnode;
		return (ptr->next);
	}
	else
		return(NULL);
}
