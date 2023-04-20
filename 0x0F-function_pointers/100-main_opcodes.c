#include <stdio.h>
#include <stdlib.h>

/**
 * main - The function to print its own opcode.
 * @argc: The number of args.
 * @argv: The array of args.
 * Return: (0) Success.
 */

int main(int argc, char **argv)
{
	int bytes, index;
	char *ptr;

	if (argc < 2)
	{
		printf("Error\n");
		exit(1);
	}
	bytes = atoi(argv[1]);
	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	ptr = (char *)main;
	for (index = 0; index < bytes - 1; index++)
		printf("%02hhx ", ptr[index]);
	printf("%02hhx\n", ptr[index]);
	return (0);
}
