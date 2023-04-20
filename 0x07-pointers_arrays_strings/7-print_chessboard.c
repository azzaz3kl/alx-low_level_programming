#include "main.h"

/**
 * print_chessboard - The function to print chessboard.
 * @a: The pointer variable.
 * Return: (0) Success.
 */

void print_chessboard(char (*a)[8])
{
	int x;
	int y;

	for (x = 0; x < 8; x++)
	{
		for (y = 0; y < 8; y++)
		{
			_putchar(a[x][y]);
		}
		_putchar('\n');
	}
}
