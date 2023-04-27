#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - Adding new node at the beginning of a list_t list.
 * @head: The pointer to pointer to head of list.
 * @str: The string to be duplicated and added as new node
 * Return: The address of new element or NULL if failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	if (head == NULL || str == NULL)
		return (NULL);

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}

	new->len = strlen(str);
	new->next = *head;
	*head = new;

	return (new);
}
