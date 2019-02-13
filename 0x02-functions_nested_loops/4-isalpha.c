#include "holberton.h"

/**
* _isalpha - a function that checks for alphabetic character
* @c: a given character
*
* Return: 1 if c is a letter or 0 for else
*/

int _isalpha(int c)
{
	if (c > 'a' && c < 'z')
		return (1);

	if (c > 'A' && c < 'Z')
		return (1);

	else
		return (0);
}
