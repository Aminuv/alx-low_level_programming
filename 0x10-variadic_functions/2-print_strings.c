#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - the function that prints a string.
 * @separator: string separator.
 * @n: num of argument.
 * @...: string.
 *
 * return: void.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	int i = n;
	char *str;
	va_list p;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(p, n);
	while (i--)
		printf("%s%s", (str = va_arg(p, char *)) ? str : "(nil)", i ? (separator ? separator : "") : "\n");
	va_end(p);
}
