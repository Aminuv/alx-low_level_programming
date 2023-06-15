#include "lists.h"
/**
 * sum_dlistint - the function that returns the sum if the  data of linked list
 * @head: pointer to head
 *
 * Return: 0
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
