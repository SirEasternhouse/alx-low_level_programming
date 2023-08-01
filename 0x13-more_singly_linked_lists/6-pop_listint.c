#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 *pop_listint - deletes the head node of a linked list, and returns the head node’s data (n)
 *@head: head of node
 *
 *
 *Return: new head node afte intial head is deleted
 */
int pop_listint(listint_t **head)
{
	int data;
	listint_t *temp;

	if (*head == NULL)
	{
		return (0);
	}

	data = (*head)->n;

	temp = *head;

	*head = (*head)->next;

	free(temp);

	return(data);
}
