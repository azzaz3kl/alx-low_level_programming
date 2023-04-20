#include "function_pointers.h"

/**
 * int_index - The function for searching an intger.
 * @array: The array.
 * @size: The size of array.
 * @cmp: The pointer to function that compares values.
 * Return: -1 for failure or return the index.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (index = 0; index < size; index++)
	{
		if (cmp(array[index]))
			return (index);
	}
	return (-1);
}
