#include <stdio.h>
#include "lists.h"
/**
 * sum_dlistint - sum of a doubly linked list
 * @head: head of node
 *
 * Return: The sum of doubly linked list
 */
int sum_dlistint(dlistint_t *head) /*sum doubly linked list*/
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
