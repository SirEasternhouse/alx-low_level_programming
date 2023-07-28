#include  <stdio.h>
#include  <stddef.h>
#include "lists.h"
/**
 * print_list - print all elements in a node
 *@h: element to print
 *
 *
 * Return: elements in node
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;
	const list_t *current = h;

	if (current == NULL)
	{
		printf("[0] (nil)\n");
		return (count);
	}

	while (current != NULL)
	{
		printf("[%u] ", current->len);

		if (current->str != NULL)
		{
			printf("%s\n", current->str);
		}
		else
		{
			printf("(nil)\n");
		}

		current = current->next;
		count++;
	}

	return (count);
}
