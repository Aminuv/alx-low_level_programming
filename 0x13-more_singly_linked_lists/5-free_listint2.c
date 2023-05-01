#include "lists.h"

/**
 * free_listint2 - free the list.
 * @head: pointer to a pointer to the head.
 *
 */

void free_listint2(listint_t **head)
{
	listint_t *node;

	if (head == NULL)
		return;

	while ( *head != NULL)
	{
			node = (*head)->next;
			free(node);
			*head = node;
	}
	*head = NULL;
}
