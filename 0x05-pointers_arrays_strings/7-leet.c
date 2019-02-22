#include "holberton.h"

/**
* leet - a function that encodes a string into 1337
* @s: string to be converted
*
* Return: 1337 string
*/

char *leet(char *s)
{
	int i, j;
	char l337[11] = {'A', 'a', 'E', 'e', 'L', 'l', 'O', 'o', 'T', 't'};
	char alph[11] = {'4', '4', '3', '3', '1', '1', '0', '0', '7', '7'};

	for (i = 0; s[i]; i++)
	{
		for (j = 0; alph[j]; j++)
		{
			if (s[i] == alph[j])
			{
				s[i] = l337[j];
			}
		}
	}

	return (s);
}
