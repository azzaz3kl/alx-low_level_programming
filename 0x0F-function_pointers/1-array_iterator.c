#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - The function that executes a function given as a parameter.
 * @array: pointer to array
 * @action: The pointer to a function to call.
 * @size: The size of array.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t index;

	if (array != 0 && action != 0)
	{
		for (index = 0; index < size; index++)
			action(array[index]);
	}
}
