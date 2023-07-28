#include "lists.h"
#include <stddef.h>
/**
 *list_len - determine the length of a node
 *@h: nodes to count
 *
 *Return: number of elements in a node
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;
	const list_t *current = h;

	while (current != NULL)
	{
		count++;
		current = current->next;
	}
	return (count);
}
