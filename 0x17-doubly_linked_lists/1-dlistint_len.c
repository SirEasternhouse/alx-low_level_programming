#include <stddef.h>
#include "lists.h"
/**
 *dlistint_len - determine the number of elements in a doubly linked list
 *@h: node to count
 *
 *
 *Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return(count);
}
