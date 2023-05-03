#include "lists.h"

/**
 * reverse_listint - function fo preveres list
 * @head: pointer to the first node
 *
 * Return: adr of head
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *node, *next;

	if (head == NULL || *head == NULL)
		return (NULL);

	node = *head;
	*head = NULL;
	while (node)
	{
		next = node->next;
		node->next = *head;
		*head = node;
		node = next;
	}
	return (*head);
}
