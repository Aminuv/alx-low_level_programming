#include "lists.h"

/**
 * insert_nodeint_at_index - inserts the new node at the given index
 * @head: pointer to the first node
 * @idx:index
 * @n:the n value
 *
 * Return: an adress of new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *node;
	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	node = *head;
	for (i = 0; i <= idx - 1 && new_node != NULL; i++)
	{
		new_node->next = node->next;
		node->next = new_node;
		return (new_node);
	}
			node = node->next;

	free(new_node);
		return (NULL);
}
