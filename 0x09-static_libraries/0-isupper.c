#include "main.h"

/**
 * _isupper - Checking Upercase letters
 * @c: char to check
 * Return: 0 (Success) or 1 (Error)
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
