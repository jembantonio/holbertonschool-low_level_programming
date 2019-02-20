#include "holberton.h"

/**
* _strcpy - a function that copies the string pointed to by src,
* including the terminating null byte (\0),
* to the buffer pointed to by dest
* @dest: destination to cpy src
* @src: pointer to string
*
* Return: char pointer to dest
*/

char *_strcpy(char *dest, char *src)
{
	int str;

	for (str = 0; src[str]; str++)
		dest[str] = dest[str];

	return (dest);
}
