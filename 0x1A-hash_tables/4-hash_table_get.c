#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"
/**
 *hash_table_get - Retrieves a value associated with a key
 *@ht: The hash table to look into
 *@key: The key to search for
 *
 *Return: The value associated with the element
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *node;
	/* Check if the hash table or key is NULL */
	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);
	/* Compute the index for the given key */
	index = key_index((unsigned char *)key, ht->size);
	/* Traverse the linked list at the computed index */
	node = ht->array[index];
	while (node != NULL)
	{
		/* Check if the current node's key matches the given key */
		if (strcmp(node->key, key) == 0)
		{
			/* Return the value associated with the key */
			return (node->value);
		}
		node = node->next;
	}
	/* Key couldn't be found */
	return (NULL);
}
