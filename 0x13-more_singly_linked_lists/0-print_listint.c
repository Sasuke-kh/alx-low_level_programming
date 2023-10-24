#include "lists.h"

/**
 * print_listint - prints linked list nodes
 * @h: nude header
 * Return: nude count
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *ptr = NULL;
	int count = 0;

	ptr = h;
	while (ptr != NULL)
	{
		if (ptr->str == NULL)
		{
			printf("[0] (nil)\n");
			ptr = ptr->next;
			count++;
		}

		if (ptr->str != NULL)
		{
			printf("[%d] %s\n", ptr->len, ptr->str);
			ptr = ptr->next;
		}
	count++;
	}
	return (count);
}
