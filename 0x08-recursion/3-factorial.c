#include "main.h"

/**
 * factorial - The function to get factorial of intergers.
 * @n: The entered integer.
 * Return: Factorial of integer.
 */
int factorial(int n)
{
	if (n == 0)
		return (1);
	if (n < 0)
		return (-1);
	else
		return (n * factorial(n - 1));
}
