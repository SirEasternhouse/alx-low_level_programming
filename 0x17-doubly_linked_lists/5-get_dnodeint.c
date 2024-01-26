#include "lists.h"
#include <stddef.h>
/**
 *get_dnodeint_at_index - get node data at index
 *@head: head of node
 *@index: index of node
 *
 *Return: data at index
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	unsigned int i = 0;

	if (head == NULL || (int)index < 0)
	{
		return (NULL);
	}

	while (current != NULL && i < index)
	{
		current = current->next;
		i++;
	}

	return (current);
}
