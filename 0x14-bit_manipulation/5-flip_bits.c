#include "main.h"

/**
 * flip_bits - function return the number of bits
 * @n: first number
 * @m: second number
 *
 * Return: number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int i = 0;
	unsigned long int s = n ^ m;

	for (; s != 0; i += 1)
		s &= (s - 1);
	return (i);
}
