#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 *insert_dnodeint_at_index - insrt  node at an index
 *@h: head of node
 *@idx: index of node
 *@n: number
 *
 *Return: new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	dlistint_t *current = *h;
	unsigned int i = 0;

	if (h == NULL || idx > 0)
		return (NULL);
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;

	if (idx == 0 || !*h)
		return (add_dnodeint(h, n));
	while (i < idx - 1 && current != NULL)
	{
		current = current->next;
		i++;
	}
	if (current == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->next = current->next;
	new_node->prev = current;
	if (current->next != NULL)
		current->next->prev = new_node;
	current->next = new_node;
	return (new_node);
}
