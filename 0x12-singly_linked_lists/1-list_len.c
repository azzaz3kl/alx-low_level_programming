#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - Getting number of elements in a linked list.
 * @h: The pointer to the list_t list.
 * Return: Number of elements in h.
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
