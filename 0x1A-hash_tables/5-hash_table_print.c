#include "hash_tables.h"
/**
 * hash_table_print - prints an entire hash table
 *
 * @ht: hasht table to traverse and print
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int idx = 0;
	hash_node_t *tmp;

	if (!ht)
		return;

	printf("{");
	while (idx < ht->size)
	{
		tmp = ht->array[idx];
		while (tmp)
		{
			printf("'%s': '%s'\n", tmp->key, tmp->value);
			tmp = tmp->next;
		}

		idx++;
	}
	printf("}\n");
}
