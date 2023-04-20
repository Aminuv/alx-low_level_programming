#include "variadic_functions.h"
#include <stdarg.h>


/**
* sum_them_all -  a function that returns the sum of all its parameters
* @n: The number of function.
* @...: A variable number of paramters.
*
* Return: 0
*/

int sum_them_all(const unsigned int n, ...)
{
va_list ap;
unsigned int i, s = 0;

va_start(ap, n);

for (i = 0; i < n; i++)
s += va_arg(ap, int);

va_end(ap);

return (s);
}
