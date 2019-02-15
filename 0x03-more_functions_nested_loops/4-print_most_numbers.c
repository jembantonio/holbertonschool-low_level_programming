#include "holberton.h"

/**
* print_most_numbers - a function that prints the numbers,
* from 0 to 9, followed by a new line. Does not print 2 and 4
*
* return: void
*/

void print_most_numbers(void)
{
	int a;

	for (a = '0'; a <= '9'; a++)
	{
		if (a != '2' && a != '4')
			_putchar(a);
	}
	_putchar('\n');
}
