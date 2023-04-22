#include "main.h"

/**
 * _strlen_recursion - The function to return length of string.
 * @s: The entered string.
 * Return: String length.
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (_strlen_recursion(s + 1) + 1);
}
