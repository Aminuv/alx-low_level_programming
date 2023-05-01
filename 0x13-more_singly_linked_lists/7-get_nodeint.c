#include "lists.h"

/**
 * get_nodeint_at_index - returns node at index.
 * @head: pointer to the first node.
 * @index: index of a node.
 *
 * Return: pointer
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node;
	unsigned int i = 0;

	node = head;
	while (i < index && head != NULL)
	{
		node = node->next;
		i++;
	}
	return (node);
}
