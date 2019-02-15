#include "holberton.h"

/**
* print_triangle - a function that prints a triangle, followed by a new line
* @size: size of triangle
*
* return: void
*/

void print_triangle(int size)
{
	int pound, line, empty;

	if (size <= 0)
		_putchar ('\n');

	else
	{
		for (line = 1; line <= size; line++)
		{
			for (empty = 1; empty <= size - line; empty++)
			{
				_putchar(' ');
			}
			for (pound = 1; pound <= line; pound++)
			{
				_putchar('#');
			}
			_putchar ('\n');
		}
	}
}
