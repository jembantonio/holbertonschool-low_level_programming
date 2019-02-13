#include "holberton.h"

/**
* print_alphabet_x10 - a function that prints 10 times the alphabet,
* in lowercase, followed by a new line
*
* Return: Always 0 (Success)
*/

void print_alphabet_x10(void)
{
	int a, i;

	for (i = 0; i < 10; i++)
	{
		for (a = 'a'; a <= 'z'; a++)
			_putchar (a);
		_putchar ('\n');
	}
}
