#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all -  The function that returns the sum of all its parameters.
 *  @n: the constant interger.
 *  @...: int.
 *
 *  return: 0.
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int s = 0, i;
	va_list ap;

	va_start(ap, n);
	for (i = 0; i < n; i++)

		s += va_arg(ap, int);

	va_end(ap);

	return (s);
}
