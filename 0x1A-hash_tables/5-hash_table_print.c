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
	char flag = '\0';

	if (!ht)
		return;

	printf("{");
	while (idx < ht->size)
	{
		tmp = ht->array[idx];
		while (tmp)
		{
			if (flag != '\0')
				printf(", ");
			printf("'%s': '%s'", tmp->key, tmp->value);
			if (flag == '\0')
				flag = '1';
			tmp = tmp->next;
		}

		idx++;
	}
	printf("}\n");
}
