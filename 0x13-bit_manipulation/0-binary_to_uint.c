#include "holberton.h"

/**
* binary_to_uint - a function that converts a binary number to
* an unsigned int
* @b: a pointer to a string af 0 and 1 characters
*
* Return: converted number or 0
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int i;

	i = 0;

	if (!*b)
		return (0);
	while (*b)
	{
		if (*b == '0')
			i = i << 1;
		else if (*b == '1')
			i = (i << 1) | 1;
		else
			return (0);
		b++;
	}

	return (i);
}
