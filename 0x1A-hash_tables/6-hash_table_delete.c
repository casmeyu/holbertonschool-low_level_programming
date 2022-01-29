#include "hash_tables.h"
/**
 * hash_table_delete - deletes a hash table, including the nodes and the array
 *
 * @ht: hash table to delete
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int idx;
	hash_node_t *prev, *tmp;

	if (ht)
	{
		for (idx = 0; idx < ht->size; idx++)
		{
			prev = ht->array[idx];

			while (prev)
			{
				tmp = prev->next;

				free(prev->key);
				free(prev->value);
				free(prev);

				prev = tmp;
			}
		}
		free(ht->array);

		free(ht);
	}
}
