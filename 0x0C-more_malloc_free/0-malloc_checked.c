#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * malooc_checked - the function that allocates memory
 *@b: integer
 *
 *return: pointer
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
