#include "hash_tables.h"

/**
 * ash_table_get - function that retrieves a value associated with a key.
 * @ht:hacsh tables
 * @key: the key
 *
 * Return: the value asosiated or NULL
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *_node;
	unsigned long int index;

	index = key_index((unsigned char *)key, ht->size);
	_node = ht->array[index];

	while (_node != NULL)
	{
		if (!strcmp(_node->key, key))
			return (_node->value);
		_node = _node->next;
	}
	return (NULL);
}
