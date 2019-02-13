#include "holberton.h"

/**
* _islower - a function that checks for lowercase character
* @c: a character that is upper or lower case
*
* Description: A function that checks if a given character is
* upper or lower case. 0 for lower. 1 for upper
*
* Return: Always 0 (Success)
*/

int _islower(int c)
{
	if (c > 'a' && c < 'z')
		return (1);

	else
		return (0);
}
