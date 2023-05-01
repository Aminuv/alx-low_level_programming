#include "lists.h"

/**
 * print_listint - Th Function that prints all the elements of a listint_t list
 * @h: the head node of the list.
 * Return: Number of nodes.
 */

size_t print_listint(const listint_t *h)
{
	size_t cnt = 0;

	while (h != NULL)
	{printf("%d\n", h->n);
		h = h->next;
		cnt++;
	}
	return (cnt);
}
