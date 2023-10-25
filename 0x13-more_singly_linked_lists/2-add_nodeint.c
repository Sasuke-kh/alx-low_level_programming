#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_nodeint - add a new node at the beg
 * @head: node header
 * @str: string to duplicate
 * Return: address of new element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode = malloc(sizeof(listint_t));

	if (!newnode)
	{
		free(newnode);
		return (NULL);
	}
	newnode->n = n;
	newnode->next = NULL;

	newnode->next = *head;
	*head = newnode;

	return (*head);
}
