#include "main.h"

/**
 * root - a funtion to check square root.
 * @a:Number.
 * @b:Flag.
 * Return: flag or -1.
 */
int root(int a, int b)
{
	if (a * a == b)
		return (a);
	if (a * a > b)
		return (-1);
	return (root(a + 1, b));
}
/**
 * _sqrt_recursion - a function to print square.
 * @n: Number.
 * Return: (0) Success.
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (root(1, n));
}
