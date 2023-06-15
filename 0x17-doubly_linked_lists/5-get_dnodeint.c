#include "lists.h"
/**
 * get_dnodeint_at_index - a fanction that returns the nth node of a dlistint
 * @head: pointer to the head
 * @index: index, starting from 0
 *
 * Return: NULL or ntd node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	if (!head)
		return (NULL);

	for (i = 0; i < index; i++)
	{
		if (head->next == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
