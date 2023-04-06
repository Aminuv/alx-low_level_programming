#include "main.h"

int actual_prime(int n, int i);

/**
 * is_prime_number - The function that returns 1 if the input integer is a prime number.
 * @n: output
 *
 * Return: 0 if n is not a prime number, 1 if is it.
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}

/**
 * actual_prime - calculates the numbers
 * @n: numbers
 * @i: iterator.
 *
 * Return: 1 our 0
 */
int actual_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (actual_prime(n, i - 1));
}
