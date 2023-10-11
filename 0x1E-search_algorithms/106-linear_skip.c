#include "search_algos.h"

/**
 * linear_skip - Function for searchesabout the value in the sorted.
 * @list: pointer the skip.
 * @value: Value for search.
 *
 * Return: pointer.
 */

skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *_node, *jmp;

	if (list == NULL)
		return (NULL);

	for (_node = jmp = list; jmp->next != NULL && jmp->n < value;)
	{
		_node = jmp;
		if (jmp->express != NULL)
		{
			jmp = jmp->express;
			printf("Value checked at index [%ld] = [%d]\n",
				   jmp->index, jmp->n);
		}
		else
		{
			while (jmp->next != NULL)
				jmp = jmp->next;
		}
	}

	printf("Value found between indexes [%ld] and [%ld]\n",
		   _node->index, jmp->index);

	for (; _node->index < jmp->index && _node->n < value; _node = _node->next)
		printf("Value checked at index [%ld] = [%d]\n", _node->index, _node->n);
	printf("Value checked at index [%ld] = [%d]\n", _node->index, _node->n);

	return (_node->n == value ? _node : NULL);
}
