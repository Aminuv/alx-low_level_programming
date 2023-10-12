#include "search_algos.h"

/**
 * linear_search - searches for a value in an array.
 * @array: the input of the array
 * @size: the size of it
 * @value: a value of searsh
 *
 * Return: index
 */

int linear_search(int *array, size_t size, int value)
{
	size_t x = 0;

	if (array == NULL)
		return (-1);

	for (x = 0; x < size; x++)
	{
		printf("Value checked array[%lu] = [%d]\n", x, array[x]);

		if (array[x] == value)
			return (x);
	}
	return (-1);
}
