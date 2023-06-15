#include "lists.h"
/**
 * add_dnodeint_end -  unction that adds a new node at the end of a dlistint
 * @head: pointer to pointer to the head
 * @n: an element
 *
 * Return: address or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	
	new_node->n = n;
	new_node->next = NULL;
	
	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
	}
	else
	{
		dlistint_t *t = *head;

		while (t->next != NULL)
			t = t->next;
		t->next = new_node;
		new_node->prev = t;
	}
	return (new_node);

}
