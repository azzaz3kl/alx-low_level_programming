#include <stdio.h>
#include "main.h"

/**
 * main - Getting name of current program
 * @argc: The number of arguments
 * @argv: The array of arguments
 * Return: Always 0 (success)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
