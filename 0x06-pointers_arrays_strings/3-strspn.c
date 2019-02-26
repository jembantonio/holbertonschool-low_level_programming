#include "holberton.h"

/**
* _strspn - a function that gets the length of a prefix substring
* @s: pointer to string
* @accept: characters to match
*
* Return: the number of bytes in the initial segment of s which
* consist only of bytes from accept
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, same, size;

	same = 0;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				same = 1;
				size++;
			}
		}
		if (same == 0)
			return (size);
	}
	return (0);
}
