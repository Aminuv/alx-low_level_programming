#include "search_algos.h"

/**
 * advanced_binary_recursive - function for performs recursive binary search
 * @array: pointer to the element
 * @right: the index
 * @left:  the ending index
 * @value: the value for search
 * Return: -1 or, index.
 */

int advancedbinary(int *array, size_t left, size_t right, int value)
{
	size_t x;

	if (right < left)
		return (-1);

	printf("Searching in array: ");
	for (x = left; x < right; x++)
		printf("%d, ", array[x]);
	printf("%d\n", array[x]);

	x = left + (right - left) / 2;
	if (array[x] == value && (x == left || array[x - 1] != value))
		return (x);
	if (array[x] >= value)
		return (advanced_binary_recursive(array, left, x, value));
	return (advanced_binary_recursive(array, x + 1, right, value));
}

/**
 * advanced_binary - function for searches a value in the sorted array. 
 * @array: pointer to array
 * @size: the elements in array
 * @value: the value for search
 * Return: -1 || value
 */

int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);

	return (advancedbinary(array, 0, size - 1, value));
}
