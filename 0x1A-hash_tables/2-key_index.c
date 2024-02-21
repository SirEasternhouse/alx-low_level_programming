#include "hash_tables.h"
/**
 *key_index - Computes the index of a key in the hash table's array
 *@key: The key
 *@size: the size of the array
 *
 *Return: The index where the key should be stored
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
