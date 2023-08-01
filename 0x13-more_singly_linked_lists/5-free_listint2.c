#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 *free_listint2 - free linkedlist and set the head to null
 *@head: heat of linked lists
 *
 *Return:none
 *
 */
void free_listint2(listint_t **head)
{
	listint_t *current = *head;
	listint_t *next_node;

	while (current != NULL)
	{
		next_node = current->next;

		free(current);
		current = next_node;
	}

	*head = NULL;
}
