#include "hash_tables.h"
/**
 *hash_table_delete - The function that deletes a hash tables.
 *@ht: pointer to the hash tables.
 */

void hash_table_delete(hash_table_t *ht)
{
	shash_node_t *temp1,  *temp2;
	unsigned long int cont;

	if (ht == NULL)
		return;

	for (cont = 0; cont < ht->size; cont++)
	{
		temp1 = ht->array[cont];
		while ((temp2 = temp1) != NULL)
		{
			temp1 = temp1->next;
			free(temp2->key);
			free(temp2->value);
			free(temp2);
		}
	}
	free(ht->array);
	free(ht);
}
