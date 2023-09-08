#include "hash_tables.h"

/**
 * hash_table_create - A function thta create a hash table.
 * @size: The size of the table.
 *
 * Return: A pointer to the newly created hash table.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hTable = malloc(sizeof(hash_table_t));
	unsigned long int i;

	if (hTable == NULL)
		return (NULL);

	hTable->size = size;
	hTable->array = malloc(sizeof(hash_node_t *) * size);
	if (hTable->array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		hTable->array[i] = NULL;

	return (hTable);
}
