#include "holberton.h"

/**
* rot13 - a function that encodes a string into rot13
* @s: string to be converted
*
* Return: rot13 string
*/

char *rot13(char *s)
{
	int i, j;
	char rot13[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char alph[52] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; s[i]; i++)
	{
		for (j = 0; alph[j]; j++)
		{
			if (s[i] == alph[j])
			{
				s[i] = rot13[j];
				break;
			}
		}
	}

	return (s);
}
