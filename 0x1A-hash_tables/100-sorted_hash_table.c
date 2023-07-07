#include "hash_tables.h"

/**
 * shash_table_create - A Function that creates a shash table with a given size
 *
 * @size: A size of the shash table
 *
 * Return: the created shash table, or NULL.
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *tabl;
	shash_node_t **array;
	unsigned long int i;

	tabl = malloc(sizeof(shash_table_t));
	if (tabl == NULL)
		return (NULL);

	array = malloc(sizeof(shash_node_t *) * size);
	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = NULL;

	tabl->array = array;
	tabl->size = size;
	tabl->shead = NULL;
	tabl->stail = NULL;

	return (tabl);
}

/**
 * add_n_shash - function for inning of a shash at a given index
 *
 * @h: The head of the shash.
 * @key: The key of the shash.
 * @value: The value to the store.
 *
 * Return: created a node
 */

shash_node_t *add_n_shash(shash_node_t **h, const char *key, const char *value)
{
	shash_node_t *temp;

	temp = *h;

	while (temp != NULL)
	{
		if (strcmp(key, temp->key) == 0)
		{
			free(temp->value);
			temp->value = strdup(value);
			return (temp);
		}
		temp = temp->next;
	}

	temp = malloc(sizeof(shash_node_t));

	if (temp == NULL)
		return (NULL);

	temp->key = strdup(key);
	temp->value = strdup(value);
	temp->next = *h;

	*h = temp;

	return (temp);
}

/**
 * add_i_shash - The function that adds node on the DLL of the shash table
 *
 * @ht: The pointer to the table
 * @new: The new node.
 *
 * Return:
 */

void add_i_shash(shash_table_t *ht, shash_node_t *new)
{
	shash_node_t *temp1, *temp2;
	int r;

	temp1 = temp2 = ht->shead;

	while (temp1 != NULL)
	{
		r = strcmp(new->key, temp1->key);
		if (r == 0)
		{
			return;
		}
		else if (r < 0)
		{
			new->sprev = temp1->sprev;

			if (temp1->sprev)
				temp1->sprev->snext = new;
			else
				ht->shead = new;

			temp1->sprev = new;
			new->snext = temp1;

			return;
		}
		temp2 = temp1;
		temp1 = temp1->snext;
	}

	new->sprev = temp2;
	new->snext = NULL;

	if (ht->shead)
		temp2->snext = new;
	else
		ht->shead = new;

	ht->stail = new;
}

/**
 * shash_table_set - The function that adds a hash (key,falue ofshash table.
 *
 * @ht: The pointer to the shash table.
 * @key: The key of the shash.
 * @value: A value.
 *
 * Return: 1 or, 0 if fails.
 */

int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int _index;
	shash_node_t *new;

	if (ht == NULL)
		return (0);

	if (key == NULL || *key == '\0')
		return (0);

	_index = key_index((unsigned char *)key, ht->size);

	new = add_n_shash(&(ht->array[_index]), key, value);

	if (new == NULL)
		return (0);

	add_i_shash(ht, new);

	return (1);
}

/**
 * shash_table_get - The function tha retrieves a value  associated with a key.
 *
 * @ht: The pointer to the shash table.
 * @key: The key of the shash
 *
 * Return: A value..
 */

char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int _index;
	shash_node_t *temp;

	if (ht == NULL)
		return (NULL);

	if (key == NULL || *key == '\0')
		return (NULL);

	_index = key_index((unsigned char *)key, ht->size);

	temp = ht->array[_index];

	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
			return (temp->value);
		temp = temp->next;
	}

	return (NULL);
}

/**
 * shash_table_print - iThe function that prints the keys
 * and The values of a shash table
 * @ht: The pointer to the shash table.
 * Return:
 */

void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *temp;
	char *s;

	if (ht == NULL)
		return;

	printf("{");
	s = "";

	temp = ht->shead;

	while (temp != NULL)
	{
		printf("%s'%s': '%s'", s, temp->key, temp->value);
		s = ", ";
		temp = temp->snext;
	}

	printf("}\n");
}

/**
 * shash_table_print_rev - The function tha prints the keys
 * and values of the shash table
 * @ht: The pointer to the shash table.
 * Return:
 */

void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *temp;
	char *s;

	if (ht == NULL)
		return;

	printf("{");
	s = "";

	temp = ht->stail;

	while (temp != NULL)
	{
		printf("%s'%s': '%s'", s, temp->key, temp->value);
		s = ", ";
		temp = temp->sprev;
	}

	printf("}\n");
}

/**
 * shash_table_delete - The func that deletes a shash table.
 * @ht: The pointer to the shash table.
 *
 * Return:
 */

void shash_table_delete(shash_table_t *ht)
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
