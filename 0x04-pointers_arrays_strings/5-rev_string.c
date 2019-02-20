#include "holberton.h"

/**
* rev_string - a function that reverses a string
* @s: pointer to string to ber reversed
*
* return: void
*/

void rev_string(char *s)
{
	int length, i, j;
	char c;

	while (*(s + length) != '\0')
		length++;

	length = length - 1;

	i = 0;

	for (j = length; j > i ; j--)
	{
		c = s[i];
		s[i] = s[j];
		i++;
		s[j] = c;
	}
}
