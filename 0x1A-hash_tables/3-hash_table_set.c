#include "hash_tables.h"
#include <stdio.h>
/**
 * hash_table_set - adds an element to a hash table
 *
 * @ht: hash table to append to
 * @key: key to append to
 * @value: value to append to the key
 *
 * Return: 1 on success or 0 on failure
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int key_idx;
	hash_node_t *new_node, *tmp;

	unsigned const char *dupkey = (unsigned const char *)key;

	if (!ht | !key)
		return (0);
	key_idx = key_index(dupkey, ht->size);
	tmp = ht->array[key_idx];

	while (tmp)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			free(tmp->value);
			tmp->value = strdup(value);
			return (1);
		}
		tmp = tmp->next;
	}

	new_node = malloc(sizeof(*new_node));
	if (!new_node)
		return (0);

	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = NULL;

	if (ht->array[key_idx] == NULL)
	{
		ht->array[key_idx] = new_node;
		return (1);
	}

	new_node->next = ht->array[key_idx];
	ht->array[key_idx] = new_node;

	return (1);
}
