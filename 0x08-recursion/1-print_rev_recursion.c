#include "main.h"

/**
 * _print_rev_recursion - The function to print reverse string.
 * @s: The entered string.
 * Return: (0) Success.
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
