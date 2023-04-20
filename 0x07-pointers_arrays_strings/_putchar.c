#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the character c.
 * @c: The character to print
 * Return: (1) on Success or (-1) on failure.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
