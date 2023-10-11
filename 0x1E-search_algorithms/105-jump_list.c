#include "search_algos.h"

/**
 * jump_list - Function for Searches the value using 'Jump' search.
 * @list: Pointer to the list.
 * @size: Number of nodes.
 * @value: The value for search.
 *
 * Return: pointer to the first node, or NULL.
 */

listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t step, stp_size;
	listint_t *node, *jump;

	if (list == NULL || size == 0)
		return (NULL);

	stp= 0;
	stp_size = sqrt(size);
	for (node = jump = list; jump->index + 1 < size && jump->n < value;)
	{
		node = jump;
		for (stp+= stp_size; jump->index < stp; jump = jump->next)
		{
			if (jump->index + 1 == size)
				break;
		}
		printf("Value checked at index [%ld] = [%d]\n", jump->index, jump->n);
	}

	printf("Value found between indexes [%ld] and [%ld]\n",
		   node->index, jump->index);

	for (; node->index < jump->index && node->n < value; node = node->next)
		printf("Value checked at index [%ld] = [%d]\n", node->index, node->n);
	printf("Value checked at index [%ld] = [%d]\n", node->index, node->n);

	return (node->n == value ? node : NULL);
}
