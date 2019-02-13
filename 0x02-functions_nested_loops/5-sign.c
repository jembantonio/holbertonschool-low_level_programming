#include "holberton.h"

/**
* print_sign - a function that prints the sign of a number
* @n: a given integer
*
* Return: 1 if n is greater than 0, 0 if n is 0, -1 if n is less than 0
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}

