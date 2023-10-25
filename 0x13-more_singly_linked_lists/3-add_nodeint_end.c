#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_nodeint_end - add a new node at the beg
 * @head: node header
 * @n: string to duplicate
 * Return: address of new element
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *nextptr;
	listint_t *newnode = malloc(sizeof(listint_t));

	if (!newnode)
	{
		free(newnode);
		return (NULL);
	}

	newnode->n = n;
	newnode->next = NULL;

	if (*head == NULL)
	{
		*head = newnode;
	}
	else
	{
		nextptr = *head;
		while (nextptr->next != NULL)
			nextptr = nextptr->next;
		nextptr->next = newnode;
	}

	return (newnode);
}
