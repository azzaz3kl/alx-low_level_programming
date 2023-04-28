#include "main.h"

/**
 * _puts_recursion - The Function to print a string.
 * @s: The entered string.
 * Return: (0) Success.
 */
void _puts_recursion(char *s)
{
	if (*s == 0)
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}