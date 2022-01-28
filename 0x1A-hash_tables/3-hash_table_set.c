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

	unsigned const char *dupkey = (unsigned const char *)key;

	if (!ht | !key | !value)
		return (0);
	key_idx = key_index(dupkey, ht->size);

	ht->array[key_idx] = add_hash_node(&(ht->array[key_idx]), value, key);

	return (1);
}

/**
 * add_hash_node - adds a node to a hash table at a given index
 * @h: head of the node
 * @val: value to assign to the node
 * @key: key associated with the node
 *
 * Return: the new node of NULL if it fails
 */
hash_node_t *add_hash_node(hash_node_t **h, const char *val, const char *key)
{
	hash_node_t *new_node;

	new_node = malloc(sizeof(*new_node));
	if (!new_node)
		return (NULL);
	new_node->key = strdup(key);
	new_node->value = strdup(val);
	new_node->next = *h;

	*h = new_node;
	return (*h);
}
