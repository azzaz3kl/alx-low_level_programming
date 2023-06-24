#include <stdio.h>
#include <stdlib.h>

/**
 * main - printing own opcodes
 * @argc: no of args
 * @argv: array of arguments
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int buffer, index;
	char *arr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	buffer = atoi(argv[1]);

	if (buffer < 0)
	{
		printf("Error\n");
		exit(2);
	}

	arr = (char *)main;

	for (index = 0; index < buffer; index++)
	{
		if (index == buffer - 1)
		{
			printf("%02hhx\n", arr[index]);
			break;
		}
		printf("%02hhx ", arr[index]);
	}
	return (0);
}
