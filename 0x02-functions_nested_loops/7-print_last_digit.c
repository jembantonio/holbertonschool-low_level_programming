#include "holberton.h"

/**
* print_last_digit - a function that prints the last digit of a number
*
* @r: int
*
* Return: the value of the last digit
*/

int print_last_digit(int r)
{
	int last;

	last = r % 10;

	if (r > 0)
		_putchar(last + '0');

	else
	{
		last *= (-1);
		_putchar(last + '0');
	}
	return (last);
}
