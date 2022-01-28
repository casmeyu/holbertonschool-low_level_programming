#include "hash_tables.h"
/**
 * hash_table_create - this functions create a hash table
 * based on the hash_table_s struct
 *
 * @size: size of the hash table (unsigned long int)
 * Return: a pointer to the new hash table or NULL if fail
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table = NULL;
	unsigned long int i;

	new_table = malloc(sizeof(*new_table));
	if (!new_table)
		return (NULL);

	new_table->size = size;
	new_table->array = malloc(size * sizeof(hash_node_t *));
	if (!new_table->array)
	{
		free(new_table);
		return (NULL);
	}

	for (i = 0; i < size; i++)
		new_table->array[i] = NULL;

	return (new_table);
}
