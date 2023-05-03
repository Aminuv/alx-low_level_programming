#include "lists.h"

/**
 * free_listint_safe - frees the linked list
 * @h: pointer to the first node
 *
 * Return: number of the elements
 */

size_t free_listint_safe(listint_t **h)
{
	int i;
	size_t l = 0;
	listint_t *node;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		i = *h - (*h)->next;

		if (i > 0)
	{

		node = (*h)->next;
		free(*h);
		*h = node;
		l++;
	}

		else
		{
			free(*h);
			*h = NULL;
			l++;
			break;
		}
	}

	*h = NULL;

	return (l);
}
