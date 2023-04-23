#include "main.h"
#include <string.h>

/**
 * check - Checks characters recursively for palindrome.
 * @s: The entered string.
 * @i: iterator
 * @length: String length.
 * Return: (1) if palindrome or (0) if not.
 */
int check(char *s, int i, int length)
{
	if (*(s + i) != *(s + length - 1))
		return (0);
	if (i >= length)
		return (1);
	return (check(s, i + 1, length - 1));
}

/**
 * is_palindrome - Checking if a string is a palindrome.
 * @s: string
 * Return: (1) if palindrome or (0) not.
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check(s, 0, strlen(s)));
}
