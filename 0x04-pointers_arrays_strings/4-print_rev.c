#include "holberton.h"

/**
* print_rev - a function that prints a string, in reverse,
* followed by a new line
* @s: pointer to string
*
* return: void
*/

void print_rev(char *s)
{
	int length, count;

	for (; *(s + count) != '\0'; count++)
		;
	count -= 1;

	for (length = count; length >= 0; length--)
	{
		_putchar(s[length]);
	}
	_putchar('\n');
}
