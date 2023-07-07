#include "hash_tables.h"
/**
 *hash_table_delete - The function that deletes a hash tables.
 *@ht: pointer to the hash tables.
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *node, *te;
	unsigned long int cont = 0;

	if (ht == NULL)
		return;

	for (cont = 0; cont < ht->size; cont++)
	{
		node = ht->array[cont];
		while (node != NULL)
		{
			te = node;
			node = node->next;
			free(te->key);
			free(te->value);
			free(te);
		}
	}
	free(ht->array);
	free(ht);
}
