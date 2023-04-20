#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers -  The function that prints numbers.
 * @separator: pointer to the string.
 * @n: number of argument.
 * @...: int.
 *
 * return: void.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	int i = n;
	va_list p;

	if (!n)
	{
		printf("\n");
		return;
	}

	va_start(p, n);
	while (i--)
		printf("%d%s", va_arg(p, int), i ? (separator ? separator : "") : "\n");
	va_end(p);
}
