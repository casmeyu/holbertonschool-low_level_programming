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
	unsigned long int i;
	unsigned const char *dupkey;
	unsigned long int key_idx;

	if (!ht | !key | !value)
		return (0);
	dupkey = (unsigned const char *)key;
	key_idx = hash_djb2(dupkey);
	add_hash_node(ht->array[key_idx], value);

	for (i = 0; ht->array[i]; i++)
	{
		printf("%s\n", ht->array[i]->value);
	}	
	return (1);
}

hash_node_t *add_hash_node(hash_node_t *head, const char *value)
{
	hash_node_t *new_node;

	new_node = malloc(sizeof(*new_node));
	if (!new_node)
		return(NULL);
	new_node->value = value;
	new_node->next = head;

	head = new_node;

	return (head);
}
