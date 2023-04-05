#include "main.h"

int actual_prime(int n, int i);

/**
 * is_prime_number - a function that returns 1 if the input integer is a prime number.
 * @n: output.
 *
 * Return: int
 */
int is_prime_number(int n)
{
	while (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}

/**
 * actual_prime - calculates if a number is prime recursively.
 * @n: output.
 * @i: iterator.
 *
 * Return: 1 
 */
int actual_prime(int n, int i)
{
	if (i == 1)
		return (1);
	else if (n % i == 0 && i > 0)
		return (0);
	return (actual_prime(n, i - 1));
}
