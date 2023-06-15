#include "lists.h"
/**
 * delete_dnodeint_at_index - Function Deletes the node at the given index
 * @head: Pointer to the address
 * @index: Index
 *
 * Return: 1 , -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	current = *head;
	if (index == 0)
	{
		*head = current->next;
		if (*head != NULL)
		{
			(*head)->prev = NULL;
		}
		free(current);
		return (1);
	}
	while (current != NULL && i < index)
	{
		current = current->next;
		i++;
	}
	current->prev->next = current->next;
	if (current->next != NULL)
		current->next->prev = current->prev;
	free(current);
	return (-1);

}
