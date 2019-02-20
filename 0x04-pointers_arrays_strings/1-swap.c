#include "holberton.h"

/**
* swap_int - a function that swaps the values of two integers
* @a: integer
* @b: integer
*
* return: void
*/

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
