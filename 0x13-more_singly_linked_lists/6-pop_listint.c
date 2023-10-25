#include "lists.h"

/**
 * pop_listint - removes list head
 * @head: list head
 * Return: head->n
 */

int pop_listint(listint_t **head)
{
	listint_t *ptr;

	if(*head == NULL)
		return (0);
	ptr = *head;
	*head = (*head)->next;
	free(ptr);

	return ((*head)->n);
}
