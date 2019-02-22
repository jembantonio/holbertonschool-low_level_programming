#include "holberton.h"

/**
* _strncat - a function that concatenates two strings
* @dest: original string
* @src: string to be appended
* @n: cat n bytes of src
*
* Return: a pointer to the resulting string dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int orig, new;

	orig = 0;

	while (dest[orig])
		orig++;

	for (new = 0; src[new] && new < n; new++)
		dest[orig + new] = src[new];

	dest[orig + new] = '\0';

	return (dest);
}
