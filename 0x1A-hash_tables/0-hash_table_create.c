#include <stdlib.h>
#include "hash_tables.h"
/**
 *hash_table_create - create a hash table
 *@size: the size of the hash table
 *
 *Return: pointer to new hash table / null if unsuccessful
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table = NULL;
	unsigned long int i;

	/*allocating memory for the has table */
	hash_table = malloc(sizeof(hash_table_t));
	if (hash_table == NULL)
	{
		return (NULL);
	}

	/*allocating memory for array of pointers*/
	hash_table->array = malloc(size * sizeof(hash_node_t *));
	if (hash_table->array == NULL)
	{
		free(hash_table);
		return (NULL);
	}

	/* initializing each element of the array to null*/
	while (i < size)
	{
		hash_table->array[i] = NULL;
		i++;
	}

	hash_table->size = size;
	return (hash_table);

}
