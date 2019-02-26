#include "holberton.h"

/**
* _memset - a function that fills memory with a consant byte
* @s: pointer to a string
* @b: constant byte
* @n: n bytes of memory to be filled
*
* Return: a pointer to the memory area s
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int index;

	for (index = 0; index < n; index++)
		s[index] = b;

	return (s);
}
