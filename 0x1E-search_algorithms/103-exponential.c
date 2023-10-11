#include "search_algos.h"

/**
 * _binary_search - searches for the value to be sorted
 * @array: array of int
 * @left: The left element
 * @right: The right element
 * @value: vVlue for search.
 *
 * Return: -1 or, index
 */

int _binary_search(int *array, size_t left, size_t right, int value)
{
	size_t x;

	if (array == NULL)
		return (-1);

	while (right >= left)
	{
		printf("Searching in array: ");
		for (x = left; x < right; x++)
			printf("%d, ", array[x]);
		printf("%d\n", array[x]);

		x = left + (right - left) / 2;
		if (array[x] == value)
			return (x);
		if (array[x] > value)
			right = x - 1;
		else
			left = x + 1;
	}
	return (-1);
}


/**
 * exponential_search - searches for the value thet sorted in the array.
 * @array: pointer to array.
 * @size: the number of array.
 * @value: Value For search.
 *
 * Return: index or, -1.
 */

int exponential_search(int *array, size_t size, int value)
{
	size_t x = 0;
	size_t  right;

	if (array == NULL || size == 0)
		return (-1);
	if (array[0] != value)
	{
		for (x = 1; x < size && array[x] <= value; x *= 2)
			printf("Value checked array[%ld] = [%d]\n", x, array[x]);
	}

	right = x < size ? x : size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", x / 2, right);
	return (_binary_search(array, x/ 2, right, value));
}
