#include <stdio.h>
#include "variadic_functions.h"

/**
 * sum_them_all - Getting sum of all inputs
 * @n: Number of all inputs numbers
 * Return: 0 or the sum
 *
*/
int sum_them_all(const unsigned int n, ...)
{
	int sum;
	unsigned int i;
	va_list ap;

	va_start(ap, n);

	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);

	va_end(ap);

	return (sum);
}
