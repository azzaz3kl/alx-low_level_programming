#include "main.h"

/**
 * _strspn - The function that gets length of prefix substring.
 * @s: The given string,
 * @accept: The prefix to look for.
 * Return: Always a.
 */

unsigned int _strspn(char *s, char *accept)
{
	int x, y;

	for (x = 0; s[x] != '\0'; x++)
	{
		for (y = 0; accept[y] != '\0'; y++)
		{
			if (s[x] == accept[y])
			{
				break;
			}
		}
		if (accept[y] == '\0')
			break;

	}
	return (x);
}
