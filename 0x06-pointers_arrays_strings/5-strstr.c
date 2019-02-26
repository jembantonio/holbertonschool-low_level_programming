#include "holberton.h"

/**
* _strstr - a function that locates a substring
* @haystack: original string
* @needle: checker
*
* Return: a pointer to the beginning of the located substring
* or NULL if the substring is not found
*/

char *_strstr(char *haystack, char *needle)
{
	unsigned int index;

	index = 0;

	while (haystack[index])
	{
		while (*(haystack + index) && *(needle + index) &&
		haystack[index] == needle[index])
		{
			index++;
		}

		if (!needle[index])
		{
			return (haystack);
		}

		haystack++;
	}
	return ('\0');
}
