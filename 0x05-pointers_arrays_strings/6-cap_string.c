#include "holberton.h"

/**
* cap_string - a function that capitalizes all words of a string
* @s - pointer to string
*
* Return: capitalized string
*/

char *cap_string(char *s)
{
	int i, j;
	char delim[] = {9, 10, 32, 33, 34, 40, 41, 44, 46, 59, 63, 123, 125};

	for (i = 0; s[i]; i++)
	{
		if (s[0] >= 'a' && s[0] <= 'z')
		{
			s[i] = s[i] - 32;
		}
	
		for (j = 0; j < 13; j++)
		{
			if (s[i] == delim[j])
			{
				if (s[i + 1] >= 'a' && s[i] <= 'z')
				{
					s[i + 1] = s[i + 1] - 32;
				}
			}
		}
	}
	return (s);
}
