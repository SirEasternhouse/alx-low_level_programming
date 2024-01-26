#include <stdlib.h>
#include "lists.h"
/**
 * insert_dnodeint_at_index - inserting a node at a specified index
 * @h: head of node
 * @idx: index
 * @n: input integer
 *
 *
 * Return: New node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_ *new_node = malloc(sizeof(dlistint_t));
	unsigned int i = 0;
	/*invalid input handling*/
	if (h == NULL || idx > dlistin_len(*h))
		return (NULL);
/* new node creation*/
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
/* accounting for special cases*/
	if (idx == 0)
		return (addnodeint(h, n));
	else if (idx == dlistint_end(h, n))
		return (add_dnodeint_end(h, n));
/*finding node before insertion point*/
	dlistint_t *current = *h;

	while (i < idx)
	{
		current = current->next;
		i++;
	}
/* linking new node*/
	new_node->next = current->next;
	new_node->prev = current;
/* updating pointers*/
	if (current->next != NULL)
	{
		current->next->prev = new_node;
	}
	current->next = new_node;
	return (new_node);
}
