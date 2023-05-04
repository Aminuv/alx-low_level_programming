#include "main.h"

/**
 * get_endianness - function checks the endianness
 *
 * Return: 1 or 0
 */

int get_endianness(void)
{
	char *c;
	int i = 1;

	c = (char *)&i;

	return (*c);
}
