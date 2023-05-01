#include "lists.h"

/**
 * add_nodeint - adds a new node at the biginning of the list.
 * @head: pointer to the first head
 * @n:the new node
 *
 * Return: the adr of the new element or NULL
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t *));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
