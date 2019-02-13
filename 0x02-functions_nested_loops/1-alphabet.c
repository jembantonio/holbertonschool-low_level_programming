#include "holberton.h"

/**
* print_alphabet - a function that prints the alphabet in lowercase
*
* return: void
*/

void print_alphabet(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
		_putchar (a);
	_putchar ('\n');
}
