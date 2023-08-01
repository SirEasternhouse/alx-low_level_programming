#include <stddef.h>
#include "lists.h"
/**
 * get_nodeint_at_index - get an index of a node
 *@head: head of node
 *@index: index of the node
 *
 *Return: index of the node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current = head;
	unsigned int count = 0;

	while (current != NULL)
	{
		if (count == index)
		{
			return (current);
		}

		current = current->next;
		count++;
	}
	return (NULL);
}
