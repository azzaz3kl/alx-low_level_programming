#include <stdlib.h>
#include "main.h"

/**
 * count_word - A function to count the number of words in a string.
 *
 * @s: string to evaluate.
 *
 * Return: the number of words.
 */

int count_word(char *s)
{
	int sign, chr, wrd;

	sign = 0;
	wrd = 0;

	for (chr = 0; s[chr] != '\0'; chr++)
	{
		if (s[chr] == ' ')
			sign = 0;
		else if (sign == 0)
		{
			sign = 1;
			wrd++;
		}
	}

	return (wrd);
}

/**
 * **strtow - splits a string into words.
 *
 * @str: the string to split.
 *
 * Return: (Success) pointer to an array of strings.
 *         or (Error) return null.
 */

char **strtow(char *str)
{
	char **string, *tmp;
	int i, k = 0, len = 0, words, c = 0, start, end;

	while (*(str + len))
		len++;
	words = count_word(str);
	if (words == 0)
		return (NULL);

	string = (char **) malloc(sizeof(char *) * (words + 1));
	if (string == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				end = i;
				tmp = (char *) malloc(sizeof(char) * (c + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				string[k] = tmp - c;
				k++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = i;
	}

	string[k] = NULL;

	return (string);
}
