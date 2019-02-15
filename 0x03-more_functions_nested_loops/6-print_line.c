#include "holberton.h"

/**
* print_line - a function that draws a straight line in the terminal
* @n: number of times the character _ should be printed
*
* Return: void
*/

void print_line(int n)
{
	int line;

	if (n <= 0)
		_putchar ('\n');

	else
	{
		for (line = 0; line < n; line++)
			_putchar('_');
		_putchar('\n');
	}
}
