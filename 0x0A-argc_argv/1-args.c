#include <stdio.h>
#include "main.h"

/**
 * main - Getting number of arguments that passed to program
 * @argc: The number of arguments
 * @argv: The array of arguments
 * Return: Always 0 (success)
 */

int main(int argc, char *argv[])
{
(void) argv;                 /* For Ignoring argv */
	printf("%d\n", argc - 1);
	return (0);
}
