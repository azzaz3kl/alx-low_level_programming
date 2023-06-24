#include "3-calc.h"

/**
 * main - DOing simple operations
 * @argc: no of args
 * @argv: array of args
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int n1, n2, output;
	int (*op_func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	n1 = atoi(argv[1]);
	n2 = atoi(argv[3]);

	op_func = get_op_func(argv[2]);

	if (op_func == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	output = op_func(n1, n2);
	printf("%d\n", output);

	return (0);
}
