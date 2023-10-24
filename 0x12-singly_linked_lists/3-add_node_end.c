#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - add a new node at the beg
 * @head: node header
 * @str: string to duplicate
 * Return: address of new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *nextptr;
	list_t *newnode = malloc(sizeof(list_t));

	if (!newnode)
	{
		free(newnode);
		return (NULL);
	}

	newnode->str = strdup(str);
	newnode->len = strlen(str);
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
