#include "main.h"

/**
 *_memcpy - The function to copy memory.
 *
 *@dest: Stored memory.
 *
 *@src: Copid Memory.
 *
 *@n: Number of bytes to copy.
 *
 *Return: Pointer to dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
