#include "lists.h"
#include <stdlib.h>
/**
 *free_list - free the node list
 *@head: node to free of memory
 *
 *
 *Return: none
 */
void free_list(list_t *head)
{
	while (head != NULL)
	{
		list_t *temp = head;

		head = head->next;
		free(temp->str);
		free(temp);
	}

}
