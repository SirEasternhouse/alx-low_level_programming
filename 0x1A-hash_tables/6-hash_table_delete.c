#include <stdlib.h>
#include "hash_tables.h"
/**
 * hash_table_delete - Deletes a hash table
 * @ht: The hash table to delete
 *
 *Return: none
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node, *temp;
	/* Check if the hash table is NULL */
	if (ht == NULL)
		return;
	/* Iterate through each element of the array */
	for (i = 0; i < ht->size; i++)
	{
		/* Free the linked list at each index */
		node = ht->array[i];
		while (node != NULL)
		{
			temp = node->next;
			free(node->key);
			free(node->value);
			free(node);
			node = temp;
		}
	}
	/* Free the array and the hash table itself */
	free(ht->array);
	free(ht);
}
