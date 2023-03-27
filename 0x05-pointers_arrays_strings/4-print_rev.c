#include "main.h"

/**
 * print_rev - main function to print a string in reverse.
 * @s: Pointer, the string to be printed.
 * Return: none.
 */

void print_rev(char *s)
{
	int index;

	for (index = 0; s[index] != '\0'; ++index)
		;

	for (--index; index >= 0; --index)
		_putchar(s[index]);
	_putchar('\n');
}
