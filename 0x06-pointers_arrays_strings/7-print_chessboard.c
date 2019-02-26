#include "holberton.h"

/**
* print_chessboard - a function that prints the chess board
* @a: pointer to chessboard array
*
* Return: void
*/

void print_chessboard(char (*a)[8])
{
	unsigned int r, c;

	for (r = 0; r < 8; r++)
	{
		for (c = 0; c < 8; c++)
		{
			_putchar(a[r][c]);
		}
		_putchar('\n');
	}
}
