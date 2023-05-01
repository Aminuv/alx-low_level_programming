#include "lists.h"

/**
 * listint_len - A Function returns the number of elements in a linked listint .
 * @h: The head node.
 *
 * Return: Number of elements.
 */

size_t listint_len(const listint_t *h)
{
	size_t cnt = 0;

	while (h != NULL)
	{
		cnt++;
		h = h->next;
	}
	return (cnt);
}
