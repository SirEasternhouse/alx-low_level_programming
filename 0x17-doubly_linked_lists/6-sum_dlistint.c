#include <stdio.h>
#include "lists.h"
/**
 *sum_dlistint - sum node list
 *@head: head of list
 *
 *
 *Return: sum
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
