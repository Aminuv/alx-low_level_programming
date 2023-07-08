#include "hash_tables.h"
/**
 * hash_table_print - function prints the keys and values of the hash table
 * @ht: pointer to hash table
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *temp;
	char *s;

	if (ht == NULL)
		return;

	printf("{");
	s = "";

	for (i = 0; i < ht->size; i++)
	{
		temp = ht->array[i];
		while (temp != NULL)
		{
			printf("%s'%s': '%s'", s, temp->key, temp->value);
			s = ", ";
			temp = temp->next;
		}
	}
	printf("}\n");
}
