#include "hash_tables.h"
/**
 *hash_table_delete - The function that deletes a hash tables.
 *@ht: pointer to the hash tables.
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *cur, *te;
	unsigned long int cont;

	if (ht == NULL)
		return;

	for (cont = 0; cont < ht->size; cont++)
	{
		cur = ht->array[cont];

		while (cur)
		{
			te = cur->next;
			free(cur->key);
			free(cur->value);
			free(cur);
			cur = te;
		}
	}
	free(ht->array);
	free(ht);
}
