#include "lists.h"

/**
 * pop_listint - removes list head
 * @head: list head
 * Return: head->n
 */

int pop_listint(listint_t **head)
{
	listint_t *ptr = *head;

	if(!*head)
		return (0);
	*head = ptr->next;

	return (ptr->n);
}
