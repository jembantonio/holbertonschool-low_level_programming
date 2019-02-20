#include "holberton.h"

/**
* _strlen - a function that returns the length of a string
* @s: string to be counted
*
* Return: length of string
*/

int _strlen(char *s)
{
	int len;

	len = 0;

	while (s[len] != '\0')
		len++;

	return (len);
}
