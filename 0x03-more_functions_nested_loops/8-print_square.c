#include "holberton.h"

/**
* print_square - a function that prints a square, followed by a new line
* @size: size of square
*
* return: void
*/

void print_square(int size)
{
	int index, pound;

	if (size <= 0)
		_putchar ('\n');

	else
	{
		for (index = 0; index < size; index++)
		{
			for (pound = 0; pound < size; pound++)
				_putchar ('#');
			_putchar ('\n');
		}
	}
}
