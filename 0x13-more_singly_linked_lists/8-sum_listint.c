#include "lists.h"

/**
 * sum_listint - the sum of all data.
 * @head: pointer to the first node.
 *
 * Return: The sum.
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
