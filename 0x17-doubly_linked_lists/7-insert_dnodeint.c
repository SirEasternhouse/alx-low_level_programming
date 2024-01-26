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
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	unsigned int i = 0;
	dlistint_t *current = *h;
	/* Check for invalid input or index out of bounds */
	if (h == NULL || (idx > dlistint_len(*h) && *h != NULL))
	{
		free(new_node);/* Free allocated memory on failure */
		return (NULL);
	}
	/* Check for successful memory allocation */
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	/* Handle special case: insert at the beginning of the list */
	if (idx == 0)
		return (add_dnodeint(h, n));
	/* Handle special case: insert at the end of the list */
	if (*h == NULL || idx == dlistint_len(*h))
	{
		free(new_node);/* Free allocated memory on failure */
		return (NULL);
	}
	/* Find the node before the insertion point */
	while (i < idx - 1)
	{
		current = current->next;
		i++;
		if (current == NULL)/* Check if the index is out of bounds */
		{
			free(new_node);/* Free allocated memory on failure */
			return (NULL);
		}
	}
	/* Link the new node */
	new_node->next = current->next;
	new_node->prev = current;
	/* Update pointers */
	if (current->next != NULL)
		current->next->prev = new_node;
	current->next = new_node;
	return (new_node);
}
/**
 *dlistint_len - return the number of elements in a doubly linked list
 *@h: head of node
 *
 *Return: number of elements in a node
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;
	const dlistint_t *current = h;

	while (current != NULL)
	{
		count++;
		current = current->next;
	}
	return (count);
}
