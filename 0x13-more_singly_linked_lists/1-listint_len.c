#include <stdio.h>
#include <stddef.h>
#include "lists.h"
/**
 * listint_len - return number of linked elements in a node
 *@h: head of a linked list
 *
 *Return:number of elements in a linked lists
 *
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;

		count++;
	}

	return (count);
}
