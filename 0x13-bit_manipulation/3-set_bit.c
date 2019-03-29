#include "holberton.h"

/**
* set_bit - a function that sets the value of a bit to 1 at a given index
* @n: an integer
* @index: index of the bit you want to set
*
* Return: 1 if it worked, or -1 if error
*/

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > ' ')
		return (-1);

	else
	{
		*n = *n | 1 << index;
		return (1);
	}
}
