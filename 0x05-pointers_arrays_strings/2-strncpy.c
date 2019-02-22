#include "holberton.h"

/**
* _strncpy - a function that copies a string
* @dest: original string
* @src: source string
* @n: n bytes of strin gto be copied
*
* Return: a pointer to the copied string
*/

char *_strncpy(char *dest, char *src, int n)
{
	int index;

	for (index = 0; src[index] && index < n; index++)
		dest[index] = src[index];

	while (index < n)
		dest[index] = '\0';
		index++;

	return (dest);
}
