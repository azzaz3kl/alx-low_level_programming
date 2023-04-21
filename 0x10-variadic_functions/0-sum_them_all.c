#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - a function to return sum of all its paramters.
 * @n: The start of input variables.
 * Return: the sum.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int index, sum = 0;

	va_start(ap, n);

	for (index = 0; index < n; index++)
		sum += va_arg(ap, int);

	va_end(ap);

	return (sum);
}
