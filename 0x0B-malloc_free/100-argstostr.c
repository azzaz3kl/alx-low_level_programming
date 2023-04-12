#include "main.h"
#include <stdlib.h>

/**
 * argstostr - main entry.
 *
 * @ac: int input.
 *
 * @av: double pointer array.
 *
 * Return: 0
 */

char *argstostr(int ac, char **av)
{
	char *str;
	int x, y, z = 0, length = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (x = 0; x < ac; x++)
	{
		for (y = 0; av[x][y]; y++)
			length++;
	}
	length += ac;

	str = malloc(sizeof(char) * length + 1);
	if (str == NULL)
		return (NULL);
	for (x = 0; x < ac; x++)
	{
	for (y = 0; av[x][y]; y++)
	{
		str[z] = av[x][y];
		z++;
	}
	if (str[z] == '\0')
	{
		str[z++] = '\n';
	}
	}
	return (str);
}
