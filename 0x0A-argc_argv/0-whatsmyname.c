#include <stdio.h>
#include "main.h"

/**
 * main - Printing the name of the program.
 * @argc: No of args.
 * @argv: Array of args.
 * Return: (0) Success
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
