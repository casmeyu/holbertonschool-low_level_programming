#include "hash_tables.h"
#include <stdio.h>
/**
 * key_index - returns the index of a given key for a hash table
 *
 * @key: its the key to hash and find the index (* char)
 * @size: its the size of hash_table->array (unsigned long int
 *
 * Return: The index of the key (unsigned long int)
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = (hash_djb2(key) % size);
	return (index);
}
