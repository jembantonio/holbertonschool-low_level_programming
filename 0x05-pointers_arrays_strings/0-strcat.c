#include "holberton.h"

/**
* _strcat - a function that concatenates two strings
* @dest: original string
* @src: string to be appended
*
* Return: a pointer to the resulting string
*/

char *_strcat(char *dest, char *src)
{
	int orig, add;

	orig = 0;

	while (dest[orig])
		orig++;

	for (add = 0; src[add]; add++)
		dest[orig + add] = src[add];

	dest[orig + add] = '\0';

	return (dest);
}
