#include "holberton.h"

/**
* puts_half - a function that prints half of a string,
* followed by a new line
* @str: pointer to string
*
* return: void
*/

void puts_half(char *str)
{
	int length;

	while (str[length] != '\0')
		length++;

	length = length + 1;
	length = length / 2;

	while (str[length])
	{
		_putchar(str[length]);
		length++;
	}
	_putchar('\n');
}
