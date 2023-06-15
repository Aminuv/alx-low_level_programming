#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: pointer to a pointer
 * @idx: index of the list where new node will be added
 * @n:the element to be added
 *
 * Return: address of new node || NULL on failure
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *head = *h, *new;

	if (idx == 0)
		return (add_dnodeint(h, n));

	while (idx != 1)
	{
		head = head->next;
		idx--;
		if (!head)
			return (NULL);
	}

	if (head->next == NULL)
		return (add_dnodeint_end(h, n));

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->prev = head;
	new->next = head->next;
	new->next->prev = new;
	head->next = new;

	return (new);
}
