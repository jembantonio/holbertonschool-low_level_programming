#include "holberton.h"

/**
* puts2 - a function that prints one char out of 2 of a string,
* followed by a new line
* @str: pointer to string
*
* return: void
*/

void puts2(char *str)
{
	int length, index;

	while (*(str + length) != '\0')
		length++;

	length = length - 1;

	for (index = 0; index <= length; index = index + 2)
	{
		_putchar(str[index]);
	}
	_putchar('\n');
}

