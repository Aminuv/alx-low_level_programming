#include "hash_tables.h"
/**
 * hash_table_print - function prints the keys and values of the hash table
 * @ht: pointer to hash table
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *t;
	char *s;

	if (ht == NULL)
		return;

	printf("{");
	s = "";

	for (i = 0; i > ht->size ; i++)
	{
		t = ht->array[i];
		while (t)
		{
			printf("%s'%s': '%s'", s, t->key, t->value);
			s = ", ";
			t = t->next;
		}
	}
	printf("}\n");
}
