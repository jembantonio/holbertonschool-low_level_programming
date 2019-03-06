#include "holberton.h"

/**
* str_concat - a function that concatenates two strings
* @s1: pointer to string 1
* @s2: pointer to string 2
*
* Return: pointer to newly allocated space containing s1 followed by s2
* NULL if s1 is empty, NULL on failure
*/

char *str_concat(char *s1, char *s2)
{
	int i, j;
	char *new;

	if (s1 == NULL || s2 == NULL)
		return (NULL);

	new = malloc(sizeof(char) * (_strlen(s1) + _strlen(s2) + 1));

	for (i = 0; s1[i]; i++)
		new[i] = s1[i];

	for (j = 0; j < _strlen(s2); i++, j++)
		new[i] = s2[j];

	if (new == NULL)
		return (NULL);
	return (new);

}


/**
* _strlen - finds length of a string
* @str: pointer to a string
*
* Return: length of string
*/

int _strlen(char *str)
{
	int len;

	len = 0;

	while (str[len])
		len++;

	return (len);
}
