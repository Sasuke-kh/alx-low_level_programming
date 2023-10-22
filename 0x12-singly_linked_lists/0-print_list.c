#include "lists.h"

/**
 * print_list - prints linked list nodes
 * @h: nude header
 * Return: nude count
 */

size_t print_list(const list_t *h)
{
	const list_t *ptr = NULL;
	int count;
    
	ptr = h;
	while (ptr != NULL)
	{
		if (ptr->str == 0)
		{
                	printf("[0] %s\n", ptr->str);
        	        ptr = ptr->next;
        	        count++;
		}

		else
		{
			printf("[%d] %s\n", ptr->len, ptr->str);
			ptr = ptr->next;
			count++;
		}
	}
	return (count);
}
