#include "holberton.h"

/**
* create_array - a function that creates an array of chars
* and initializes it with a specific char
* @size: size of array
* @c: initialized character
*
* Return: NULL if size = 0 or fails, pointer to array if success
*/

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *str;

	str = (char *) malloc(sizeof(char) * size);

	if (str == NULL || size <= 0)
		return (NULL);

	for (i = 0; i < size; i++)
		str[i] = c;

	return (str);
}
