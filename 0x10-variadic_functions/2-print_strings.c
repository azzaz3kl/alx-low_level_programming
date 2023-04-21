#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strs - The function to Print strs, followed by a new line.
 * @separator: The string to be printed between strs.
 * @n: The number of strs passed to the function.
 *
 * Return: nothing.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strs;
	char *str;
	unsigned int index;

	va_start(strs, n);

	for (index = 0; index < n; index++)
	{
		str = va_arg(strs, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (index != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(strs);
}
