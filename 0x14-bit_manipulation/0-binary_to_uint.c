#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: points to the string
 *
 * Return: the converted number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i;

	if (!b)
		return (0);

	for (i = 0; b[i] != '\0' ; i += 1)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		i <<= 1;

		if (b[i] & 1)
			i += 1;
	}
	return (i);
}
