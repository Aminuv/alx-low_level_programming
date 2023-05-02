#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a dode at indix
 * @head: pointer to the firs node
 * @index: index of node
 *
 * Return: 1 if it success, else it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *node, *crt_node;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		crt_node = *head;
		*head = crt_node->next;
		free(crt_node);
		return (1);
	}

	node = *head;
	crt_node = (*head)->next;


	for (i = 1; crt_node != NULL && i < index; i++)
	{
		crt_node = crt_node->next;
		node = crt_node;
	}

	if (crt_node == NULL)
		return (-1);

	node->next = crt_node->next;
	free(crt_node);

	return (1);
}
