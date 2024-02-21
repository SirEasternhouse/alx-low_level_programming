#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"
/**
 *hash_table_set - Adds an element to the hash table
 *@ht: The hash table to add or update the key/value to
 *@key: The key
 *@value: The value associated with the key
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node, *temp, *prev = NULL;
	/* Check if the hash table or key is NULL */
	if (ht == NULL || key == NULL || *key == '\0')
		return (0);
	/* Compute the index for the given key */
	index = key_index((unsigned char *)key, ht->size);
	/* Check if the key already exists in the hash table */
	temp = ht->array[index];
	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
		{
			/* Update the value if the key already exists */
			free(temp->value);
			temp->value = strdup(value);
			if (temp->value == NULL)
				return (0);
			return (1);
		}
		prev = temp;
		temp = temp->next;
	}
	/* Create a new node */
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);
	/* Duplicate the key and value */
	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		return (0);
	}
	new_node->value = strdup(value);
	if (new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node);
		return (0);
	}
	/* Add the new node at the beginning of the list */
	new_node->next = NULL;
	if (prev == NULL)
		ht->array[index] = new_node;
	else
		prev->next = new_node;
	return (1);
}
