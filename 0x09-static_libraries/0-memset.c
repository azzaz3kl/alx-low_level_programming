#include "main.h"
/**
 * _memset - a function to fill memory with a constant byte.
 * @s: for putting the constant.
 * Return: Pointer s.
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
