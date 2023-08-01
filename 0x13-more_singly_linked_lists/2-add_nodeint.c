#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_nodeint - add a new load
 * @head: head of linked list
 * @n: new node to add
 *
 * Return: new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = (listint_t *)malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;

	new_node->next = *head;

	*head = new_node;

	return (new_node);
}
