#include <stddef.h>
#include <stdlib.h>
#include "lists.h"
/**
 *insert_nodeint_at_index - inserting a node at any index
 *@head: head of node
 *@idx: index of the list
 *@n: place where to add the new index
 *
 *Return: new node at specified index
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *current = *head;
	unsigned int i = 0;
	listint_t *new_node = malloc(sizeof(listint_t));

	if (head == NULL)
	{
		return (NULL);
	}

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	while (i < idx)
	{
		if (current == NULL)
		{
			free(new_node);
			return (NULL);
		}
		current = current->next;
		i++;
	}
	if (current == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->next = current->next;
	current->next = new_node;
	return (new_node);
}
