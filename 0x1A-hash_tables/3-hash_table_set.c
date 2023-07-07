#include "hash_tables.h"

/**
 * hash_table_set - function that adds an element to the hash table.
 * @ht: hash tables.
 * @key: the value.
 * @value: a value of element.
 *
 * Return: 0 or 1.
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long indx, size;
	hash_node_t *_node;

	if (!ht || !key || !value)
		return (0);

	size = ht->size;
	indx = key_index((const unsigned char *)key, size);

	if (ht->array[indx] != NULL && strcmp(ht->array[indx]->key, key) == 0)
	{
		ht->array[indx]->value = strdup(value);
		return (1);
	}

	_node = malloc(sizeof(hash_node_t));
	if (!_node)
		return (0);

	_node->key = strdup(key);
	_node->value = strdup(value);
	_node->next = ht->array[indx];
	ht->array[indx] = _node;

	return (1);
}
