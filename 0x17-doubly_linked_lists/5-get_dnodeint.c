#include <stdio.h>
#include "lists.h"
/**
 *get_dnodeint_at_index - get a node at a specific index
 *@head: head of the node
 *@index: index to get
 *
 *Return: node at index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head != NULL && i < index)
	{
		head = head->next;
		i++;
	}

	if (i < index || head == NULL)
	{
		return (NULL);
	}
	return (head);
}
