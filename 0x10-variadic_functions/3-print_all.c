#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - The function that prints anything
 * @format: list of of arguments passed to the function
 * c: char
 * i: integer
 * f: float
 * s: char *
 * Return: void
 */

void print_all(const char * const format, ...)
{
	va_list arg;
	char *p;
	float f;
	int i;
	char c;
	unsigned int u = 0;

	va_start(arg, format);
	while (format != NULL && format[u] != '\0')
	{
		switch (format[u])
		{
			case 'c':
				c = va_arg(arg, int), printf("%c", c);
				break;
			case 'u':
				i = va_arg(arg, int), printf("%d", i);
				break;
			case 'f':
				f = (float) va_arg(arg, double), printf("%f", f);
				break;
			case 'p':
				p = va_arg(arg, char *), printf("%s", p != NULL ? p : "(nil)");
				break;

			default:
				u++;
					continue;
		}

		if (format[u + 1] != '\0')
		{
		       	char *sep = ",";
			printf("%s", sep);
		}
		u++;
	}
	va_end(arg), printf("\n");
}
