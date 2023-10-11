#include "search_algos.h"

/**
 * jump_search - iThe searches for a vulue in a sorted array
 * @array: pointer array
 * @size:  number of array
 * @value: value for search
 *
 * Return: the first index
 */
int jump_search(int *array, size_t size, int value)
{
	size_t x, jmp_s, prev_idx;

	if (array == NULL || size == 0)
		return (-1);

	jmp_s = sqrt(size);
	for (x = prev_idx = 0; prev_idx < size && array[prev_idx] < value;)
	{
		printf("Value checked array[%ld] = [%d]\n", prev_idx, array[prev_idx]);
		x = prev_idx;
		prev_idx += jmp_s;
	}

	printf("Value found between indexes [%ld] and [%ld]\n", x, prev_idx);

	prev_idx = prev_idx < size - 1 ? prev_idx : size - 1;
	for (; x < prev_idx && array[x] < value; x++)
		printf("Value checked array[%ld] = [%d]\n", x, array[x]);
	printf("Value checked array[%ld] = [%d]\n", x, array[x]);

	return (array[x] == value ? (int)x : -1);
}
