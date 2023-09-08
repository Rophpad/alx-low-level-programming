#include "hash_tables.h"

#define COMMA false
/**
 * hash_table_print - A function that prints a hash table.
 * @ht: A pointer to the hash Table
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	unsigned long int i;
	bool sep = COMMA;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			if (sep)
				printf(", ");
			node = ht->array[i];
			while (node != NULL)
			{
				printf("'%s': '%s'", node->key, node->value);
				node = node->next;
				if (node != NULL)
					printf(", ");
			}
			sep = !sep;
		}
	}
	printf("}\n");

}
