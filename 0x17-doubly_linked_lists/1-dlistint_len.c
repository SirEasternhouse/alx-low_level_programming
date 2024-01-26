#include <stdio.h>
#include "lists.h"

/**
 *dlistint_len - return the number of elements in a doubly linked list
 *@h: head of node
 *
 *Return: number of elements in a node
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
