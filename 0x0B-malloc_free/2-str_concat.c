#include "main.h"
#include <stdlib.h>

/**
 * str_concat - A function ti concatenates two strings.
 *
 * @s1: The string to be concatenated upon.
 *
 * @s2: The string to be concatenated to s1.
 *
 * Return: concat of s1 & s2.
 */

char *str_concat(char *s1, char *s2)
{
	char *contct_str;
	int i, conct_i = 0, len = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] || s2[i]; i++)
		len++;

	contct_str = malloc(sizeof(char) * len);

	if (contct_str == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		contct_str[conct_i++] = s1[i];

	for (i = 0; s2[i]; i++)
		contct_str[conct_i++] = s2[i];

	return (contct_str);
}
