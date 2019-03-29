#include "holberton.h"

/**
* get_bit - a function that returns the value of a bit at a given index
* @n: integer
* @index: index at which to return the value
*
* Return: value of the bit at index or -1 if error
*/

int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	if (index <= ' ')
	{
		bit = (n >> index) & 1;
		return (bit);
	}
	else
		return (-1);
}
