#include "main.h"

/**
 * _strpbrk - Searches a string.
 * @s: The given string.
 * @accept: The bytes to be searched for.
 * Return: S or Null.
 */

char *_strpbrk(char *s, char *accept)
{
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
				return (s);
		}

		s++;
	}
	return ('\0');
}
