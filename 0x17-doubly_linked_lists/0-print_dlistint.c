#include "lists.h"
/**
 * print_dlistint - function that prints all the elements
 * @h: pointer to head
 *
 * Return: num of the nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
