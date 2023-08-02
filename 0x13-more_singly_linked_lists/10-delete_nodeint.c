#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
/**
 *delete_nodeint_at_index - delete a node at a specified index
 *@head: head of node
 *@index: index of node
 *
 *
 *Return: 1 success
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current = NULL, *node_to_delete = NULL;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		listint_t *temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	current = *head;

	while (i < index - 1 && current != NULL)
	{
		current = current->next;
		i++;
	}

	if (current == NULL || current->next == NULL)
	{
		return (-1);
	}

	node_to_delete = current->next;
	current->next = node_to_delete->next;
	free(node_to_delete);
	return (1);
}
