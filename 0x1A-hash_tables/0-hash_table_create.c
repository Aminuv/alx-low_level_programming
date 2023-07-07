#include "hash_tables.h"

/**
 * hash_table_create - the function that creates a hash table.
 * @size: the size oh ana array.
 *
 * Return: pointer to hash table.
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t  *hash_table = malloc(sizeof(hash_table_t));

	if (hash_table == NULL)
		return (NULL);

	hash_table->size = size;
	hash_table->array = malloc(sizeof(hash_node_t *) * size);

	if (hash_table->array == NULL)
		return (NULL);

	return (hash_table);
}
