#include "lists.h"
/**
 * dlistint_len - a function that prints all the elements of a dlistint
 * @h: pointer to the head
 *
 * Return: num of element
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i;

	for (i = 0; h != NULL; i++)
		h = h->next;
	return (i);
}
