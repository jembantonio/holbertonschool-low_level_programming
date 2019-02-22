#include "holberton.h"

/**
* string_toupper - Write a function that changes all lowercase
* letters of a string to uppercase
* @str: string to modify
*
* Return: modified string (str)
*/

char *string_toupper(char *str)
{
	int index;

	for (index = 0; str[index]; index++)
	{
		if (str[index] >= 'a' && str[index] <= 'z')
			str[index] = str[index] - 32;
		else
			continue;
	}

	return (str);
}
