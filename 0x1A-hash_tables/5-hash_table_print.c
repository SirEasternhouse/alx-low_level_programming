#include <stdio.h>
#include "hash_tables.h"
/**
 *hash_table_print - Prints a hash table
 *@ht: The hash table to print
 *
 *Return: printed hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node;
	int first_pair = 1;
	/* Check if the hash table is NULL */
	if (ht == NULL)
	{
		return;
	}

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node != NULL)
		{
			/* Print comma & space before each pair, except for the first one */
			if (first_pair)
				first_pair = 0;
			else
				printf(", ");
			printf("'%s': '%s'", node->key, node->value);
			node = node->next;
		}
	}
	printf("}\n");
}
