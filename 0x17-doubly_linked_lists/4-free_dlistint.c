#include "lists.h"
/**
 * free_dlistint - a function that frees the dlistint lst
 * @head: pointer to that head
 *
 * Return: 0
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *stm;

	while (head)
	{
		stm = head;
		head = head->next;
		free(stm);
	}
}
