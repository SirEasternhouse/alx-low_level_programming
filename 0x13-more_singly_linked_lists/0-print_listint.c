#include <stdio.h>
#include <stddef.h>
#include "lists.h"
/**
 * print_listint - print the number of elements in a node
 *@h - elements to print
 *
 *
 *Return: number of elements
 */
size_t print_listint(const listint_t *h)
{
	size_t node_count = 0;

	while (h != NULL)
	{
		printf("%d ", h->n);

		h = h->next;

		node_count++;
	}
	printf("\n");

	return (node_count);
}
