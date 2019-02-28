#include "holberton.h"

/**
* is_palindrome - a function that returns 1 if a string is a palindrome, 0 not
* @s: pointer to string
*
* Return: 1 if palindrome or empty, 0 if not
*/

int is_palindrome(char *s)
{
	int length;

	length = _strlenrec(s);

	return (_strcmprec(s, 0, length - 1));
}



/**
* _strlenrec - finds the length of a string
* @s: pointer to string
*
* Return: length of string + 1
*/

int _strlenrec(char *s)
{
	if (*s)
		return (_strlenrec(s + 1) + 1);
	return (0);
}

/**
* _strcmprec - compares the start and end of a string recursively
* @s: pointer to string
* @start: pointer to starting point of comparison
* @end: pointer to end of string
*
* Return: 1 if the string is a palindrome, 0 if not
*/

int _strcmprec(char *s, int start, int end)
{
	if (s[start] != s[end])
		return (0);
	else if (start > end)
		return (1);
	else
		return (_strcmprec(s, start + 1, end - 1));
}
