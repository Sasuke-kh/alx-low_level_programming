#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - insert node at index
 * @head: node header
 * @idx: givan index
 * @n: node data
 * Return: adress of node or null if faild
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int counter = 1;
	listint_t *newnode, *ptr = *head;

	if (idx == 0)
	{
		newnode = malloc(sizeof(listint_t));
		if (newnode != NULL)
		{
			newnode->n = n;
			newnode->next = *head;
			*head = newnode;
			return (*head);
		}
		else
		{
			free(newnode);
			return (NULL);
		}
	}
	while (counter < idx && counter++)
	{
		ptr = ptr->next;
		if (ptr == NULL)
			return (NULL);
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
			free(newnode);
			return (NULL);
	}
	else
	return (NULL);
}
