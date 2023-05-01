#include "lists.h"

/**
 * free_listint - free the list
 * @head: the head of list
 */

void free_listint(listint_t *head)
{
	listint_t *i;

	while (head)
	{
		i = head;
	head = head->next;
		free(i);
	}
}
