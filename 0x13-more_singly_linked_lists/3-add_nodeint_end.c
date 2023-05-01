#include "lists.h"

/**
  * add_nodeint_end - add node at end of a list.
  * @head: head of double pointer
  * @n: a value.
  *
  * Return: pointer to new node.
  */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *crnt;

		new_node = malloc(sizeof(*new_node));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (*head);
	}

	crnt = *head;

	while (crnt->next)
		crnt = crnt->next;

	crnt->next = new_node;

	return (new_node);
}
