#include "holberton.h"

/**
* _puts - a function that prints a string,
* followed by a new line, to stdout
* @str: pointer to string
*
* return: void
*/

void _puts(char *str)
{
	int index;
	char count;

	for (index = 0; str[index]; index++)
	{
		c = str[index];
		_putchar(c);
	}
	_putchar('\n');
}
