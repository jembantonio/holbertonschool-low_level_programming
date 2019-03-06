#include "holberton.h"

/**
* _strdup - a function that returns a pointer to a newly allocated space in
* memory, which contains a copy of the string given as a parameter
* @str: pointer to string
*
* Return: NULL if str = NULL, pointer to duplicated string on success
*/

char *_strdup(char *str)
{
	unsigned int len, i;
	char *dup;

	if (str == NULL)
		return (NULL);

	len = 0;
	while (str[len])
		len++;

	dup = malloc(sizeof(char) * len);

	if (dup == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		dup[i] = str[i];

	return (dup);

}
