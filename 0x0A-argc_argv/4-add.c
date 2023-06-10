#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Adding only positive numbers
 * @argc: The number of arguments
 * @argv: The array of arguments
 * Return: Always 0 (success)
 */

int main(int argc, char *argv[])
{
	int n1, n2, sum = 0;
	char c;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (n1 = 1; n1 < argc; n1++)
	{
		for (n2 = 0; argv[n1][n2] != '\0'; n2++)
		{
			c = argv[n1][n2];
			if (c < '0' || c > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[n1]);
	}
	printf("%d\n", sum);
	return (0);
}
