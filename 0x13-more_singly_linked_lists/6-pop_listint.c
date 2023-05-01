#include "lists.h"

/**
 * pop_listint - the head' pop of the node.
 * @head: pointer to the first node.
 *
 */

int pop_listint(listint_t **head)
{
	listint_t *node;
	int n;

	if (!head || !*head)
		return;

	node = (*head->next);
	n = (*head)->n;
	*head = node;
	return (n);
}
