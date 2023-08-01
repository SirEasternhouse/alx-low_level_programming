#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_listint - free linked list
 *@head: head of linked list
 *
 *
 *Return: none
 *
 */
void free_listint(listint_t *head)
{
	listint_t *current = head;
	listint_t *next_node;

	while (current != NULL)
	{
		next_node = current->next;

		free(current);

		current = next_node;
	}
}
