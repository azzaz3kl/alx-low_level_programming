#include "main.h"

/**
 * _pow_recursion - The function to print power of @x by @y.
 * @x: Base value.
 * @y: Power value.
 * Return: (0) Success.
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else if (x == 0)
		return (0);
	else
		return (x * _pow_recursion(x, y - 1));
}
