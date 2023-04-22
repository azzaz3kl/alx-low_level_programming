#include "main.h"
#include <unistd.h>

/**
 * _putchar - The funtion to write character to stdout.
 * @c: The character to print
 * Return: (1) if Success or (-1) if Error and errno.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
