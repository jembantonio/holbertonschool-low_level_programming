#include "holberton.h"

/**
* set_string - a function that sets the value of a pointer to a char
* @s: double pointer to string
* @to: pointer to second string
*
* Return: void
*/

void set_string(char **s, char *to)
{
	*s = to;
}
