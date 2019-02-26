#include "holberton.h"

/**
* _strpbrk - a function that searches a string for any set of bytes
* @s: a pointer to a string
* @accept: characters to match
*
* Return: pointer to the first byte of s in which accept matches
*/

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
		}
	}
	return ('\0');
}
