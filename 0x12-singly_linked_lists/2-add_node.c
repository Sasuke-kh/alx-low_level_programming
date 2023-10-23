#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - add a new node at the beg
 * @head: node header
 * @str: string to duplicate
 * Return: address of new element
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode = malloc(sizeof(list_t));

	newnode->str = strdup(str);
	newnode->len = strlen(str);
	newnode->next = NULL;

	newnode->next = *head;
	*head = newnode;

	if (newnode == NULL)
		return (NULL);
	else
		return (newnode->next);
}
