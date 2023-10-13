#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 *free_dlistint - free a doubly linked list
 *@head: hed to free
 *
 *
 *Return: none
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;

	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current);
	}
}
