#include "holberton.h"

/**
* print_chessboard - a function that prints the chess board
* @a: pointer to chessboard array
*
* Return: void
*/

void print_chessboard(char (*a)[8])
{
	unsigned int lines, columns;

	for (lines = 0; lines <= 7; lines++)
	{
		for (columns = 0; columns <= 7; columns++)
		{
			_putchar(a[lines][columns]);
		}
		_putchar('\n');
	}
}
