#include "main.h"

/**
 * Isprime - a function that check prime n.
 * @n: The entered Integer.
 * @var: The variable tested.
 * Return: (1) for prime other wise 0.
 */
int Isprime(int n, int var)
{
	if (n % var == 0)
		return (0);
	if (var == n - 1)
		return (1);
	return (Isprime(n, var + 1));
}

/**
 * is_prime_number - function to test integer.
 * @n: integer value being passed to check for prime.
 * Return: (0) Success.
 */
int is_prime_number(int n)
{
	if (n == 0)
		return (1);
	if (n == 1)
		return (0);
	if (n < 0)
		return (0);
	return (Isprime(n, 2));
}
