#include "holberton.h"

/**
* _strcmp - compare two strings and return number of differences
* @s1: first string to compare
* @s2: second string to compare
*
* Return: difference
*/

int _strcmp(char *s1, char *s2)
{
	int index;

	index = 0;

	while ((s1[index] == s2[index]) && (s1[index] != '\0') && (s2[index] != '\0'))
		index++;

	if ((s2[index] - s1[index]) > 0)
		return (s1[index] - s2[index]);

	else if ((s1[index] - s2[index]) > 0)
		return (s1[index] - s2[index]);

	else
		return (0);
}
