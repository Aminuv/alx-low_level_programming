#include <stdlib.h>
#include "main.h"

/**
 * create_array -  create array 
 * @size: size of the array
 * @c: character 
 *
 * Return: pointer to array or NULL if it fails.
 */
char *create_array(unsigned int size, char c)
{
char *i = malloc(size);

if (size == 0 || i == 0)
return(0);

while (size--)
	i[size] = c;

return (i);
}
