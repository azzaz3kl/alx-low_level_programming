#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - multipling two numbers
 * @argc: The number of arguments
 * @argv: The array of arguments
 * Return: 0 (Success) or 1 (Error)
 */
int main(int argc, char *argv[])
{
	int mul, n1, n2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
	n1 = atoi(argv[1]);
	n2 = atoi(argv[2]);
	mul = n1 * n2;

	printf("%d\n", mul);
	return (0);
	}
}
