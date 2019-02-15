#include "holberton.h"

/**
* print_diagonal - a function that draws a diagonal line on the terminal
* @n: determines length of diagonal line
*
* return: void
*/

void print_diagonal(int n)
{
	int index, line;

	if (n <= 0)
		_putchar ('\n');

	else
	{
		for (index = 0; index < n; index++)
		{
			for (line = 0; line < n; line++)
			{
				if (n <= 0)
				{
					_putchar('\n');
				}
				else if (index == line)
				{
					_putchar('\\');
					_putchar('\n');
					break;
				}
				else
				{
					_putchar(' ');
				}
			}
		}
	}
}
