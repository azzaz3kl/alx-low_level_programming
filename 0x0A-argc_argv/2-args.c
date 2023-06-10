#include <stdio.h>
#include "main.h"

/**
 * main - Printing all arguments it receives.
 * @argc: The number of arguments
 * @argv: The array of arguments
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
