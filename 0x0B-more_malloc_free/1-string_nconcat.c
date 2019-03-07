#include "holberton.h"

/**
* string_nconcat - a function that concatenates two strings
* @s1: pointer to first string
* @s2: pointer to second string
* @n: size of second string to concatenate
*
* Return: pointer to new string or NULL if failure or empty
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *catn;
	unsigned int lens1, lens2, i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	lens1 = _strlen(s1);
	lens2 = _strlen(s2);

	if (n > lens2)
		n = lens2;

	catn = malloc(sizeof(char) * (n + lens1 + 1));

	if (!catn)
		return (NULL);

	for (i = 0; s1[i]; i++)
		catn[i] = s1[i];

	for (j = 0; s2[j] && j < n; j++, i++)
		catn[i] = s2[j];

	catn[i] = '\0';

	return (catn);

}


/**
* _strlen - find length of a string
* @s: pointer to string
*
* Return: length of string
*/

int _strlen(char *s)
{
	int i, len = 0;

	for (i = 0; s[i]; i++)
		len++;

	return (len);
}
