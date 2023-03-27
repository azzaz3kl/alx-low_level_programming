#include "main.h"
/**
 * swap_int - swaps values of two integers
 * @a: integer to swap
 * @b: integer to swap
 * Return: none
 */
void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
