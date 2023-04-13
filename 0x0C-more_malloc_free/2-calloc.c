#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _calloc - function that allocates memory for an array, using malloc.
 * @size: bytes to be allocated.
 * @nmemb: elements.
 *
 * Return: a pointer to the allocated memory else, NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (size == 0 || nmemb == 0)
	return (NULL);

	ptr = malloc(sizeof(int) * nmemb);

	if (ptr == 0)
	return (NULL);

	memset(ptr, 0, sizeof(int) * nmemb);
	return (ptr);
}
