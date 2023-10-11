#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted an array
 * @array: pointer to array
 * @size: The number of element
 * @value: a value of search
 *
 * Return: -1 if not found
 */

int binary_search(int *array, size_t size, int value)
{
	size_t x, r, l;

	if (!array)
		return (-1);

	for (l = 0, r = size - 1; r >= l;)
	{
		printf("Searching in array: ");
		for (x = l; x < r; x++)
			printf("%d, ", array[x]);
		printf("%d\n", array[x]);

		x = l + (r - l) / 2;
		if (array[x] == value)
			return (x);
		if (array[x] > value)
			r = x - 1;
		else
			l = x + 1;
	}
	return (-1);
}
