#include "main.h"

/**
 * get_bit - retrns the value of the bit at the index
 * @n: the input in decimal
 * @index: the index
 *
 * Return:The value of bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > sizeof(unsigned int) * 8)
		return (-1);

	return ((n >> index) & 1);
}
