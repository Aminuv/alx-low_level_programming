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
	unsigned long index, size;
	hash_node_t *_node;

	if (!ht || !key || !value)
		return (0);

	size = ht->size;
	index = key_index((const unsigned char *)key, size);

	if (ht->array[index] != NULL && strcmp(ht->array[index]->key, key) == 0)
	{
		ht->array[index]->value = strdup(value);
		return (1);
	}

	_node = malloc(sizeof(hash_node_t));
	if (!_node)
		return (0);

	_node->key = strdup(key);
	_node->value = strdup(value);
	_node->next = ht->array[index];
	ht->array[index] = _node;

	return (1);
}


/**
 * hash_table_get - function that retrieves a value associated with a key.
 * @ht:hacsh tables
 * @key: the key
 *
 * Return: the value asosiated or NULL
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node;
	unsigned long int index;

	if (ht == NULL)
		return (NULL);

	index = key_index((unsigned char *)key, ht->size);
	node = ht->array[index];

	if (node == NULL)
		return (NULL);

	while (node != NULL)
	{
		if (!strcmp(node->key, key))
			return (node->value);
		node = node->next;
	}
	return (NULL);
}

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

	for (i = 0; i < ht->size; i++)
	{
		t = ht->array[i];
		while (t != NULL)
		{
			printf("%s'%s': '%s'", s, t->key, t->value);
			s = ", ";
			t = t->next;
		}
	}
	printf("}\n");
}

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
