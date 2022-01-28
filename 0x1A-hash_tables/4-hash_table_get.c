#include "hash_tables.h"
/**
 * hash_table_get - this table gets the head node of a key in a hash table
 *
 * @ht: hash table to check
 * @key: key to look up for
 * Return: The associated value or NULL if not found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx;
	hash_node_t *tmp;


	if (!ht | !key)
		return (NULL);

	idx = key_index((unsigned const char *)key, ht->size);
	tmp = ht->array[idx];

	while (tmp)
	{
		if (strcmp(tmp->key, key) == 0)
			return (tmp->value);

		tmp = tmp->next;
	}

	return (NULL);
}
