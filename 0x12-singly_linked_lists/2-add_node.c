#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 *
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode = malloc(sizeof(list_t));
	newnode->str = strdup(str);
	newnode->len = strlen(str);
	newnode->next = NULL;

	newnode->next = *head;
	*head = newnode;

	return(*head);
}
