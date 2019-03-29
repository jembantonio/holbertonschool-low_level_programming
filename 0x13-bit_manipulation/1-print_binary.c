#include "holberton.h"

/**
* print_binary - a function that prints the binary representation of a number
* @n: number to be translated
*
* Return: void
*/

void print_binary(unsigned long int n)
{
	char o, l;

	o = '0';
	l = '1';

	if (n == 0)
		write(1, &o, 1);

	while (n > 0)
	{
		if ((n & 1) == 0)
			write(1, &o, 1);
		else
			write(1, &l, 1);
		n = n >> 1;
	}
}
